/*
** EPITECH PROJECT, 2021
** check_help
** File description:
** check_help
*/

#include "cipher.h"
#include "my.h"

void help(void)
{
    printf("USAGE\n"
           "    ./103cipher message key flag\n\n"
           "DESCRIPTION\n"
           "    message     a message, made of ASCII characters\n"
           "    key         the encryption key, made of ASCII characters\n"
           "    flag        0 for the message to be encrypted, 1 to be decrypted\n");
}

int check_arguments(int ac, char **av)
{
    if (ac == 2)
        if ((my_strcmp(av[1], "-h") == 0)) {
        help();
        return (0);
        }
    if (ac != 4) {
        printf("USE: ./103cipher -h\n");
        return (84);
    }
    if (av[3][0] != '0' && av[3][0] != '1')
        return (84);
    return (0);
}