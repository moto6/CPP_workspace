#include <iostream>
int main(void)
{
	int num=0, i=0 ;
	
	while(num != -1) {
		std::cout<<"Please enter the sales amount of this mounth(-1 to end): ";
		std::cin>>num;
		std::cout<<"Pay this mounth :"<<int(num*1.12)<<"\n";
		//std::cout<<num<<" x "<<i+1<<" = "<<num*(i+1)<<"\n";
	}
	std::cout<<"terminate this programm";	
	return 0;
	
}
