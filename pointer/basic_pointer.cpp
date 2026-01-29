#include <iostream>
using namespace std;
int main()
{
    int x = 25;
    int *p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer of x: " << p << endl;
    cout << "Value using pointer: " << *p << endl;
    return 0;
}
