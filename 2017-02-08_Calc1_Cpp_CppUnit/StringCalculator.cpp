#include <stdlib.h>

#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;

    // if the number is not empty
    if (numbers.size() != 0) {

        // search for comma
        std::string::size_type comma_pos = numbers.find(',');

        // if comma was found
        if (comma_pos != std::string::npos) {

            // convert just a substring before the first comma
            result = atoi(numbers.substr(0, comma_pos).c_str());

            // add the second part of the string behinf the comma
            result += atoi(numbers.substr(comma_pos + 1).c_str());
            
        } else {

            // convert whole string
            result = atoi(numbers.c_str());
        }
    }

    return result;
}