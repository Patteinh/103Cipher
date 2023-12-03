/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "cipher.h"
#include "my.h"

int main(int ac, char **av)
{
    if (check_arguments(ac, av) == 84)
        return (84);
    if (cipher(av) == 84)
        return (84);
    return (0);
}
