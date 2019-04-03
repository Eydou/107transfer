/*
** EPITECH PROJECT, 2019
** my_lib.h
** File description:
** my_lib.h
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

class math
{
public:
    double transfer;
    int i;

    int my_transfer(int ac, char **av);
    double horner(char *calc, double step);

    void my_help(void)
        {
            cout << "USAGE\n    ./107transfer [num den]*\n";
            cout << "\nDESCRIPTION\n    num  polynomial numerator ";
            cout << "defined by its coeficients\n    den   ";
            cout << "polynomial denominator defined by its coeficients" << endl;
        }

    math()
    {
        i = 1;
    }
    math(char *calc)
    {
        i = strlen(calc) - 1;
    }
};

