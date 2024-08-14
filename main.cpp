#include <iostream>

class a
{
	public :
		void p()
		{
			std::cout << "=== hi me : 1===\n";
		}
};

class b : public a
{
	public:
		void	p()
		{
			std::cout << "=== hi me : 2===\n";
		}
};

int main()
{

	a *test = new b();

	test->p();
	delete test;
	return 0;
}