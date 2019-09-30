#include <iostream>
int main(void)
{
	int num[5];
	int i=0;
	int sum=0;
	char buf[10];
	for(i=0 ; i<5 ; i++) {
		std::cout<<"insert your "<<i+1<<" integear number : ";
		std::cin >>num[i];
		sum = sum + num[i];
		//puts("num[i]");
		//std::cout<<num[i]<<std::endl;
		//puts("sum");
		//printf("%d \n",sum);
	}
	//buf = itoa(sum);
	std::cout<<"sum : "<<std::endl;
	std::cout<<sum<<std::endl;
		
	return 0;
	
}
