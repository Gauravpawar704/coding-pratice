#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping: " << "\n";
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    return 0;
}