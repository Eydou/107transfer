/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** the brain.
*/

#include "my_lib.h"

double math::horner(char *calc, double step)
{
    math po(calc);
    transfer = 0;

    for (po.i; po.i >= 0; po.i -= 2) {
        while (po.i >= 0 && calc[po.i] != '*') {
            po.i = po.i - 1;
        }
        po.i = po.i + 1;
        transfer = transfer * step;
        transfer = transfer + (calc[po.i] - 48);
    }
    return transfer;
}

int math::my_transfer(int ac, char **av)
{
    transfer = 1;

    for (double step = 0; step < 1.00100; step += 0.00100) {
        for (i; i < ac; i += 2)
            transfer = transfer * horner(av[i], step) /
                horner(av[i + 1], step);
        if (step == 0.001 && transfer == 0.00000) {
            cout << "error: result == 0.00000 or inf" << endl;
            return 84;
        }
        cout << fixed << setprecision(3) << step << " -> " << fixed
             << setprecision(5) << transfer << endl;
        i = 1;
        transfer = i;
    }
    return 0;
}

int check_error(int ac, char **av)
{
    if (ac != 3 && ac != 5)
        return 84;
    for (int i = 1; av[i] != NULL; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if ((av[i][j] < 48 || av[i][j] > 57)
                && (av[i][j] != '*'))
                return 84;
            if (av[i][j] == '*' && av[i][j + 1] == '*' ||
                av[i][j] == '*' && av[i][j+ 1] == '\0')
                return 84;
        }
    }
    if (ac == 5 && av[4][0] == '0' || ac == 3 && av[2][0] == '0')
        return 84;
    return 0;
}

int main(int ac, char **av)
{
    math po;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'
        && av[1][2] == '\0') {
        po.my_help();
        return 0;
    }
    if (check_error(ac, av) == 84) {
        cout << "error arguments or characters" << endl;
        return 84;
    } else if (po.my_transfer(ac, av) == 84)
        return (84);
    return 0;
}
