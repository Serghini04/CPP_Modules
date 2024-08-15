#include <iostream>

class base
{
	public :
		base()
		{
			std::cout << "Base\n";
		}
		virtual void p()
		{
			std::cout << "=== hi me : 1===\n";
		}
		virtual ~base()
		{
			std::cout << "I'm destructor Base.\n";
		}
};

class derived : public base
{
	int *res;
	public:
		derived()
		{
			std::cout << "Derived\n";
			res = new int[44];
		}
		void	p()
		{
			std::cout << "=== hi me : 2=`==\n";
		}
		~derived()
		{
			delete res;
			std::cout << "I'm destructor derived.\n";
		}
};

int main()
{

	std::string msg = "hi me\n";
	std::string *n = &msg;

	std::string *DeepCopy = new std::string(*n);

	*DeepCopy = "ffff";

	std::cout << *n << "\n";
	return 0;
}