#include <stdlib.h>
#include "StringCalculator.h"

int CStringCalculator::AddStringInt(const std::string &separators, const std::string &numbers)
{
    int result = 0;

    if (numbers.empty()) {

        result = 0;

    } else {

        // search for comma separator
        std::string::size_type comma_pos = numbers.find_first_of(separators);

        // if separator found
        if (comma_pos != std::string::npos) {

            // convert the text before separator to number
            result = atoi(numbers.substr(0, comma_pos).c_str());

            // convert the text after the separator to number
            result += AddStringInt(separators, numbers.substr(comma_pos + 1));

        } else {

            // covert whole test to number
            result = atoi(numbers.c_str());
        }

    }

    return result;
}

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;

    // search for the new line
    std::string::size_type new_line_pos = numbers.find('\n');

    std::string::size_type numbers_pos = 0;

    std::string separators = ",";

    // if there is a new line and the first line starts with double slash
    if (new_line_pos != std::string::npos && new_line_pos >= 3 && numbers[0] == '/' && numbers[1] == '/') {

        // all the characters between the double slash and new line are new separators
        separators = numbers.substr(2, new_line_pos - 2);

        // the number start behind the new line
        numbers_pos = new_line_pos + 1;
    }

    result = AddStringInt(separators, numbers.substr(numbers_pos));

    return result;
}