#include <iostream>
using namespace std;

void swap(int * p1,int * p2) {
	int ptemp;
	ptemp = *p1;
	puts("swap int func");
	*p1 = *p2;
	*p2 = ptemp;
	return;
}	

void swap(char * c1, char * c2) {
	char ptemp;
	ptemp = *c1;
	puts("swap char func");
	*c1 = *c2;
	*c2 = ptemp;
	return;
}	

void swap(double * db1,double * db2) {
	double ptemp;
	ptemp = *db1;
	puts("swap func");
	*db1 = *db2;
	*db2 = ptemp;
	return;
}	


int main() {
	int num1= 2, num2=30;
	char ch1= 'A', ch2 = 'Z';
	double db1= 1.111, db2 = 5.555;
	
	//int
	std::cout<<num1<<' '<<num2<<std::endl;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;
	
	//char
	std::cout<<ch1<<' '<<ch2<<std::endl;
	swap(&ch1,&ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;
	
	//double	
	std::cout<<db1<<' '<<db2<<std::endl;
	swap(&db1,&db2);
	std::cout<<db1<<' '<<db2<<std::endl;
	
	return 0;
}
	
