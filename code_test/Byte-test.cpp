#include <iostream>
using namespace std;
int main()
{
    double a =1;
    double* pa=&a ;
    int b=2;
    int *pb = &b;
    float c=3;
    float *pc = &c;
    char cha='a';
    cout << sizeof(a) << endl;
    cout << sizeof(pa) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(pb) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(pc) << endl;
    cout << sizeof(cha) << endl;
    return 0;
}