/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef _PROJECT_H
    #define _PROJECT_H

#include <math.h>

typedef struct st_cipher
{
    int **M_message;
    int **M_key;
    int **M_res;
    int size_M_key;
    int lines_M_message;
}st_cipher;

int  check_arguments(int ac, char **av);
int  cipher(char **av);
int  find_choice(char **av);
int  encrypted_message(char **av, st_cipher *array);
int  decrypted_message(char **av, st_cipher *array);
int  count_space(char *str);
void help(void);
void display_matrix_res(st_cipher *array);
void set_matrix_res(st_cipher *array);
void display_matrix_message(st_cipher *array);
void create_matrix_message(char *av, st_cipher *array);
void lines_matrix_message(char *av, st_cipher *array);
void set_matrix_message(char *av, st_cipher *array);
void create_matrix_key(char *av, st_cipher *array);
void size_matrix_key(char *av, st_cipher *array);
void set_matrix_key(char *av, st_cipher *array);
void display_matrix_key(st_cipher *array);
void create_matrix_encrypted(char *av, st_cipher *array);
void set_matrix_encrypted(char *av, st_cipher *array);
void lines_matrix_encrypted(char *av, st_cipher *array);
int  count_space(char *str);

#endif
