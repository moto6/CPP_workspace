#include <iostream>
int main(void)
{
	int num=0, i=0 ;
	std::cout<<"insert number : ";
	std::cin>>num;
	
	for(i=0;i<9;i++) {
		std::cout<<num<<" x "<<i+1<<" = "<<num*(i+1)<<"\n";
	}
			
	return 0;
	
}
