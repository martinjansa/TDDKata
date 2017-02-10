#include <stdlib.h>
#include "StringCalculator.h"

int CStringCalculator::AddString(std::string numbers)
{
    int result = 0;

    if (numbers.empty()) {

        result = 0;

    } else {

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

        // search for comma separator
        std::string::size_type comma_pos = numbers.find_first_of(separators, numbers_pos);

        // if separator found
        if (comma_pos != std::string::npos) {

            // convert the text before separator to number
            result = atoi(numbers.substr(numbers_pos, comma_pos - numbers_pos).c_str());

            // convert the text after the separator to number
            result += AddString(numbers.substr(comma_pos + 1));

        } else {

            // covert whole test to number
            result = atoi(numbers.substr(numbers_pos).c_str());
        }
    }

    return result;
}