#include <iostream>
int main(void)
{
	char name[100];
	char lang[200];
	
	std::cout<<"what is yout name  : ";
	std::cin >> name;
	
	std::cout<<"what is yout faverate lang?  : ";
	std::cin >> lang;
	
	std::cout<<"\nMy name is "<<name<<" yes yes!\n";
	std::cout<<"\nMy fav lang is "<<lang<<" yes yes!"<<std::endl;
	
	return 0;
	
}
