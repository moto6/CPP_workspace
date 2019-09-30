#include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace BestComImp1
{
	void PrettyFunc(void);
}

namespace ProComImp1
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImp1::SimpleFunc();
	//ProComImp1::SimpleFunc();
		
	return 0;
}

void BestComImp1::SimpleFunc(void) {
	std::cout<<"BestCom implementation func called"<<std::endl;
	PrettyFunc();
	ProComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc(void)
{
	std::cout<<"So Preety!!"<<std::endl;
}

void ProComImp1::SimpleFunc(void)
{
	std::cout<<"ProgCom implementation func called"<<std::endl;
}
