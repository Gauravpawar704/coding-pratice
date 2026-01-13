// Program:Factorial using recursion
// author: Gaurav
#include <iostream>
using namespace std;
int factorial(int n)
{
    ;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;

            cout
        << "Factorial: " << factorial(x);
    return 0;
}
