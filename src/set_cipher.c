/*
** EPITECH PROJECT, 2021
** set_cipher
** File description:
** set_cipher
*/

#include "cipher.h"
#include "my.h"

int decrypted_message(char **av, st_cipher *array)
{
    set_matrix_key(av[2], array);
    display_matrix_key(array);
    set_matrix_encrypted(av[1], array);
    display_matrix_message(array);
    return (0);
}

int encrypted_message(char **av, st_cipher *array)
{
    set_matrix_key(av[2], array);
    display_matrix_key(array);
    set_matrix_message(av[1], array);
    display_matrix_message(array);
    set_matrix_res(array);
    display_matrix_res(array);
    return (0);
}

int find_choice(char **av)
{
    if (my_strcmp(av[3], "0") == 0)
        return (0);
    if (my_strcmp(av[3], "1") == 0)
        return (1);
    return (84);
}

int cipher(char **av)
{
    st_cipher array;

    if (find_choice(av) == 0)
        encrypted_message(av, &array);
    if (find_choice(av) == 1)
        decrypted_message(av, &array);
    if (find_choice(av) == 84)
        return (84);
    return (0);
}