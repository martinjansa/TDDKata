#include <stdlib.h>

#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;

    // if the number is not empty
    if (numbers.size() != 0) {

        result = atoi(numbers.c_str());
    }

    return result;
}