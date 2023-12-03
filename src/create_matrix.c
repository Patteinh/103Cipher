/*
** EPITECH PROJECT, 2021
** create_matrix
** File description:
** create_matrix
*/

#include "my.h"
#include "cipher.h"

void create_matrix_message(char *av, st_cipher *array)
{
    int len_key = my_strlen(av);

    for (int i = 0; i < array->lines_M_message; i++) {
        for (int j = 0; j < array->size_M_key; j++) {
            if (i * array->size_M_key + j < len_key)
                array->M_message[i][j] = av[i * array->size_M_key + j];
            else
                array->M_message[i][j] = 0;
        }
    }
}

void create_matrix_key(char *av, st_cipher *array)
{
    int len_key = my_strlen(av);

    for (int i = 0; i < array->size_M_key; i++) {
        for (int j = 0; j < array->size_M_key; j++) {
            if (i * array->size_M_key + j < len_key)
                array->M_key[i][j] = av[i * array->size_M_key + j];
            else
                array->M_key[i][j] = 0;
        }
    }
}