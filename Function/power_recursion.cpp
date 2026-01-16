// Program:Power using recursion
// author: Gaurav
#include <iostream>
using namespace std;
int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main()
{
    int b, e;
    cout << "Enter base and exponent: ";
    cin >> b >> e;

    cout << "Result: " << power(b, e);
}