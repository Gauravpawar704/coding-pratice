#include <iostream>
using namespace std;

void change(int *x)
{
    *x = *x + 10;
}
int main()
{
    int a = 5;
    change(&a);
    cout << "Value after function call: " << a;

    return 0;
}