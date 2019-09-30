#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void) {
		std::cout<<"BestCom implementation func called"<<std::endl;
	}
}

namespace ProComImp1
{
	void SimpleFunc(void) {
		std::cout<<"ProCom implementation func called"<<std::endl;
	}
}



int main(void)
{
	BestComImp1::SimpleFunc();
	ProComImp1::SimpleFunc();
		
	return 0;
}


