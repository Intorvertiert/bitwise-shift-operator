#include <iostream>
#include <bitset>

int main(int argc, char** argv)
{
	unsigned char num = 25;
	std::bitset<sizeof(int64_t)> binary(num);
	
	std::cout << int64_t(num) << " = " << binary << std::endl;
	std::cout << int64_t(num <<= 1) << " = " << (binary <<= 1) << std::endl;
	std::cout << int64_t(num <<= 1) << " = " << (binary <<= 1) << std::endl;
	std::cout << int64_t(num >>= 4) << " = " << (binary >>= 4) << std::endl;

	system("pause >> NULL");
	return 0;
}