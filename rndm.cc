#include <iostream>
#include <TRandom3.h>

int main()
{
	TRandom3 generator(0);
	std::cout << generator.Poisson(50) << std::endl;
}
