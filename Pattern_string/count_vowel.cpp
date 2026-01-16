// Program:Count vowels in string
// author: Gaurav
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u')
        {
            count++;
        }
    }
    cout << "Vowels = " << count;
    return 0;
}
