#include <iostream>

void Myfunc(void)
{
	std::cout<<"MyFucn(void)"<<std::endl;
}

void Myfunc(char c)
{
	std::cout<<"MyFucn(char c)"<<std::endl;
}

void Myfunc(int a, int b)
{
	std::cout<<"MyFucn(int a, int b)"<<std::endl;
}

int main(void) {
	Myfunc();
	Myfunc('A');
	Myfunc(12,13);
	
}
