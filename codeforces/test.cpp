#include <iostream>


int main()
{
	int nb;
	std::cin >> nb;
	int sum = 0;
	while (nb)
	{
		int n1, n2, n3;
		int c = 0;
		std::cin >> n1 >> n2 >> n3;
		c += (n1 == 1) * 1;
		c += (n2 == 1) * 1;
		c += (n3 == 1) * 1;
		if (c >= 2)
			sum++;
		nb--;
	}
	std::cout << sum << std::endl;
	return (0);
}