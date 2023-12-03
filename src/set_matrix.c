/*
** EPITECH PROJECT, 2021
** set_matrix
** File description:
** set_matrix
*/

#include "cipher.h"
#include "my.h"

void set_matrix_res(st_cipher *array)
{
    array->M_res = malloc(sizeof(int *) * array->lines_M_message);
    for (int i = 0; i < array->lines_M_message; i++)
        array->M_res[i] = malloc(sizeof(int) * array->size_M_key);

    for (int i = 0; i < array->lines_M_message; i++)
        for (int j = 0; j < array->size_M_key; j++)
            array->M_res[i][j] = 0;

    for (int i = 0; i < array->lines_M_message; i++)
        for (int j = 0; j < array->size_M_key; j++)
            for (int k = 0; k < array->size_M_key; k++)
                array->M_res[i][j] += array->M_message[i][k] * array->M_key[k][j];
}

void lines_matrix_message(char *av, st_cipher *array)
{
    array->lines_M_message = sqrt(my_strlen(av));
    int j = my_strlen(av);

    while (array->lines_M_message * array->size_M_key < j)
        array->lines_M_message++;
}

void set_matrix_message(char *av, st_cipher *array)
{
    lines_matrix_message(av, array);
    array->M_message = malloc(sizeof(int *) * array->lines_M_message);
    for (int i = 0; i < array->lines_M_message; i++)
        array->M_message[i] = malloc(sizeof(int) *  array->size_M_key);
    create_matrix_message(av, array);
}

void size_matrix_key(char *av, st_cipher *array)
{
	array->size_M_key = sqrt(my_strlen(av));
    int j = my_strlen(av);

    while (array->size_M_key * array->size_M_key < j)
        array->size_M_key++;
}

void set_matrix_key(char *av, st_cipher *array)
{
    size_matrix_key(av, array);
    array->M_key = malloc(sizeof(int *) * array->size_M_key);
    for (int i = 0; i < array->size_M_key; i++)
        array->M_key[i] = malloc(sizeof(int) *  array->size_M_key);
    create_matrix_key(av, array);
}