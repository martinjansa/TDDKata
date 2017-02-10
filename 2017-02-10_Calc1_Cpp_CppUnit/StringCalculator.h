#ifndef __STRING_CALCULATOR__H__
#define __STRING_CALCULATOR__H__

#include <string>

class CStringCalculator {
private:

	int AddStringInt(const std::string &separators, const std::string &numbers);

public:
	int AddString(std::string numbers);
};


#endif // __STRING_CALCULATOR__H__
