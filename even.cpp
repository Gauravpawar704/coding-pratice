#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isEven = false;
    if (n % 2 == 0)
    {
        isEven = true;
    }
    if (isEven)
    {
        cout << "Even";
    }
    else
    {
        cout << "odd";
    }
}
