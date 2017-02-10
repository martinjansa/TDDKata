#include <stdlib.h>
#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;

    if (numbers.empty()) {

        result = 0;

    } else {

        // search for comma separator
        std::string::size_type comma_pos = numbers.find(',');

        // if separator found
        if (comma_pos != std::string::npos) {

            // convert the text before separator to number
            result = atoi(numbers.substr(0, comma_pos).c_str());

            // convert the text after the separator to number
            result += AddString(numbers.substr(comma_pos + 1));

        } else {

            // covert whole test to number
            result = atoi(numbers.c_str());
        }
    }

    return result;
}