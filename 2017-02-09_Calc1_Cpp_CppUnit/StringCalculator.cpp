#include <stdlib.h>

#include "StringCalculator.h"

int CStringCalculator::AddString(const std::string &numbers)
{
    int result = 0;

    // search for comma separator
    std::string::size_type comma_pos = numbers.find(',');

    // if separator is found
    if (comma_pos != std::string::npos) {

        // get the numeric value of both numbers before and after it
        result = atoi(numbers.substr(0, comma_pos).c_str());
        result += atoi(numbers.substr(comma_pos + 1).c_str());
    } else {

        // convert whole text to number
        result = atoi(numbers.c_str());
    }
    return result;
}