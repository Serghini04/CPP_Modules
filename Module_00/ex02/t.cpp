#include <ctime>
#include <iostream>
#include <iomanip>


int main()
{
	std::time_t time = std::time(0);
	std::cout <<std::localtime(&time)->tm_min<< std::endl;
}