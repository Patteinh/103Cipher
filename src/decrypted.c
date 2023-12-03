/*
** EPITECH PROJECT, 2021
** decrypted
** File description:
** decrypted
*/

#include "cipher.h"
#include "my.h"

int count_space(char *str)
{
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            a++;
    return (a);
}

void lines_matrix_encrypted(char *av, st_cipher *array)
{
    array->lines_M_message = sqrt(count_space(av));
    int j = count_space(av);

    while (array->lines_M_message * array->size_M_key < j)
        array->lines_M_message++;
}
void set_matrix_encrypted(char *av, st_cipher *array)
{
    lines_matrix_encrypted(av, array);
    array->M_message = malloc(sizeof(int *) * array->lines_M_message);
    for (int i = 0; i < array->lines_M_message; i++)
        array->M_message[i] = malloc(sizeof(int) * array->size_M_key);
    create_matrix_encrypted(av, array);
}

void create_matrix_encrypted(char *av, st_cipher *array)
{
    int ret = 0;
    int col = 0;
    int line = 0;

    for (int i = 0; i < my_strlen(av); i++) {
        if (av[i] == ' ' || av[i] == '\0') {
            array->M_message[line][col] = ret;
            col ++;
            if (col > array->size_M_key) {
                col = 0;
                line++;
            }
            ret = 0;
        }
        else
            ret = ret * 10 + av[i] - '0';
    }
    col ++;
    if (col > array->size_M_key) {
        col = 0;
        line++;
    }
    array->M_message[line][col] = ret;

}