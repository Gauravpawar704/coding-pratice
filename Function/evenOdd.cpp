// Program:even or odd using function
// author: Gaurav
#include <iostream>
using namespace std;
void evenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
}
int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;

    evenOdd(x);
    return 0;
}