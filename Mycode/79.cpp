#include <iostream> 
using namespace std;
void swapByRef2(int &ref1, int &ref2);
int main(int argc, char* argv[]) 
{
    int val1 = 10;
    int val2 = 20;

    swapByRef2(val1, val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;


    return 0; 
}
void swapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
    return;
}
