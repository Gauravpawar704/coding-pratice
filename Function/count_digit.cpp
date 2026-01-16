// Program:Count digit in function
// author: Gaurav
#include <iostream>
using namespace std;
int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Total digits: " << countDigit(num);
}