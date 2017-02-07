#include <stdlib.h>

#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = atoi(numbers.c_str());
    return result;
}