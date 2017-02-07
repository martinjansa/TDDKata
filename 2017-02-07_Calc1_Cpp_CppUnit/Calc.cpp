#include "StringCalculator.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    CStringCalculator calc;
    if (argc >= 2)
        printf("'%s' = %d\n", argv[1], calc.AddString(argv[1]));
    return 0;
}