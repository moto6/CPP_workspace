#include <iostream>
int BoxVolum(int length, int width=1, int height=1);

int main(void)
{
	std::cout<<"[3,3,3] : "<<BoxVolum(3,3,3)<<std::endl;
	std::cout<<"[5,5,D] : "<<BoxVolum(5,5)<<std::endl;
	std::cout<<"[7,D,D] : "<<BoxVolum(7)<<std::endl;
	//std::cout<<"[D,D,D] : "<<Boxvolum<<std::endl;
	
	return 0;
}

int BoxVolum(int length, int width, int height)
{
	return length*width*height;
}
