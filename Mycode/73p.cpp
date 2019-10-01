#include <iostream> 
using namespace std;

int main(int argc, char* argv[]) 
{
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref)= ptr;
    int **(&dpref) = dptr;

    cout<<ref<<endl;
    cout<<*ptr<<endl;
    cout<<**dptr<<endl;

    return 0; 
}
