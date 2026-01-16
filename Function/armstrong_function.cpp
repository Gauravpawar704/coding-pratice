// Program:Armstrong number in function
// author: Gaurav
#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n)
{
    int original = n, sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }
    return (sum == original);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num))
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not armstrong number";
    }
    return 0;
}