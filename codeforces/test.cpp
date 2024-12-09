#include <iostream>
#include <string>
#include <cmath>

void	split_nb(std::string line)
{
	for (int i = line.length() - 1, pow = 1; i >= 0 ; i--)
	{
		if (line[i] != 48)
		{
			std::cout << (int)(line[i] - 48) * pow << " ";
		}
		pow *= 10;
	}
	std::cout << "\n";
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
		int nb;
		std::cin >> nb;
		split_nb(std::to_string(nb));
    }
    return 0;
}