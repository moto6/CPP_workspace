#include <iostream>
int main(void)
{
	char name[100];
	char pnum[100];
	
	std::cout<<"insert your name : ";
	std::cin >>name;
	
	std::cout<<"insert your phone number : ";
	std::cin >>pnum;
		
	std::cout<<"your name is "<<name<<"\n";
	std::cout<<"your phone number is "<<pnum<<"\n";
			
	return 0;
	
}
