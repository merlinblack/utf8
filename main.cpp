#include <iostream>
#include "utf8.h"

void ctest(const char* str)
{
	std::cout << "C style string: " << str << std::endl;
}

int main()
{
	std::string test = "Göörüşürüz\n";

	auto wide = utf8_to_ucs(test);

	for( const auto& codepoint : wide )
		std::cout << codepoint << std::endl;

	auto cursor = wide.begin();
	
	cursor++;

	cursor = wide.erase(cursor);

	test = ucs_to_utf8(wide);

	std::cout << test << std::endl;

	ctest(test.c_str());
}
