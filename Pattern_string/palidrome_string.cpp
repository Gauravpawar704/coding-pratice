// Program:Find palidrome using string
// author: Gaurav
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int i = 0, j = s.length() - 1;
    bool isPal = true;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPal = false;
            break;
        }
        i++;
        j--;
    }
    if (isPal)
    {
        cout << "Palidrome string";
    }
    else
    {
        cout << "Not a palidrome";
    }
    return 0;
}
