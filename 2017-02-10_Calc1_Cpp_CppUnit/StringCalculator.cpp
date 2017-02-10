#include <stdlib.h>
#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;

    if (numbers.empty()) {

        result = 0;

    } else {

        result = atoi(numbers.c_str());
    }

    return result;
}