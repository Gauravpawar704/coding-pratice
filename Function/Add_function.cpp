// Program: Addition of number using function
// author: Gaurav
#include <iostream>
using namespace std;
int addNumber(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    cout << "Enter two number: ";
    cin >> x >> y;

    int result = addNumber(x, y);
    cout << "Sum: " << result;
}
