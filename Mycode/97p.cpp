#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
//#include <iostream> 
int main(void)
{ 
    char str1[] = "result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s : %f \n", str1, sin(0.14));
    printf("%s : %f \n", str2, abs(-1.25));
    //std::cout << "Hello World" << std::endl; 
    return 0; 
}
