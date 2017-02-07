#include <stdlib.h>

#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;
    
    // is there a comma separator?
    size_t comma_pos = numbers.find(',');

    // if there is no comma
    if (comma_pos == std::string::npos) {

        // convert everything to a number
        result = atoi(numbers.c_str());

    } else {

        // convert the part before the comma
        result = atoi(numbers.substr(0, comma_pos).c_str());

        // search for the second comma
        size_t comma2_pos = numbers.find(',', comma_pos+1);
        
        // if there is no 2nd comma
        if (comma2_pos == std::string::npos) {

            // add the second number
            result += atoi(numbers.substr(comma_pos+1).c_str());

        } else {

            // add the second number
            result += atoi(numbers.substr(comma_pos+1, comma2_pos - comma_pos - 1).c_str());

            // add the third number
            result += atoi(numbers.substr(comma2_pos+1).c_str());            
        }
    }
    return result;
}