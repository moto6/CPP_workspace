#include <iostream>
int BoxVolum(int length, int width, int height);
int BoxVolum(int length, int width);
int BoxVolum(int length);
int BoxVolum(void);
int main(void)
{
	std::cout<<"[3,3,3] : "<<BoxVolum(3,3,3)<<std::endl;
	std::cout<<"[5,5] : "<<BoxVolum(5,5)<<std::endl;
	std::cout<<"[7] : "<<BoxVolum(7)<<std::endl;
	std::cout<<"[D,D,D] : "<<BoxVolum()<<std::endl;
	
	return 0;
}

int BoxVolum(int length, int width, int height)
{
	return length*width*height;
}

int BoxVolum(int length, int width)
{
	return length*width;
}

int BoxVolum(int length)
{
	return length;
}

int BoxVolum(void)
{
	return 1;
}
