#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    if (*p > *q)
    {
        cout << "Largest: " << *p;
    }
    else
    {
        cout << "Largest: " << *q;
    }
    return 0;
}