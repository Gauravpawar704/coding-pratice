// Program:Factorial using function
// author: Gaurav
#include <iostream>
using namespace std;
int factNum(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;

    cout << "Factorial: " << factNum(x);
    return 0;
}
