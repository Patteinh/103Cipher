/*
** EPITECH PROJECT, 2021
** display_matrix
** File description:
** display_matrix
*/

#include "cipher.h"
#include "my.h"

void display_matrix_res(st_cipher *array)
{
    printf("Encrypted message:\n");
    for (int i = 0; i != array->lines_M_message; i++) {
        for (int j = 0; j != array->size_M_key; j++)  {
                if (i == array->lines_M_message - 1 && j == array->size_M_key -1)
                        printf("%d", array->M_res[i][j]);
                else
                    printf("%d ", array->M_res[i][j]);
        }
    }
    printf("\n");
}

void display_matrix_message(st_cipher *array)
{
    printf("Message matrix:\n");
    for (int i = 0; i != array->lines_M_message; i++) {
        for (int j = 0; j != array->size_M_key; j++) {
            if (j == array->size_M_key - 1)
                printf("%d", array->M_message[i][j]);
            else
                printf("%d\t", array->M_message[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void display_matrix_key(st_cipher *array)
{
    printf("Key matrix:\n");
    for (int i = 0; i != array->size_M_key; i++) {
        for (int j = 0; j != array->size_M_key; j++) {
            if (j == array->size_M_key - 1)
                printf("%d", array->M_key[i][j]);
            else
                printf("%d\t", array->M_key[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}