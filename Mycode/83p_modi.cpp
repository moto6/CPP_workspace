#include <iostream> 
using namespace std;

int& RefRetFuncOne(int &ref) {
    ref++;
    return ref;
}


int main(int argc, char* argv[]) 
{
    int num1 = 1;
    int a = 1;
    int &b = a;
    int &num2 = RefRetFuncOne(num1);


    cout<<"a:"<<a<<" , b:"<<b<<endl;
    a++;
    puts("after a++");
    cout<<"a:"<<a<<" , b:"<<b<<endl;
    b++;
    puts("after b++");
    cout<<"a:"<<a<<" , b:"<<b<<endl;
    
    num1++;
    num2++;

    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
    
    return 0; 
}
