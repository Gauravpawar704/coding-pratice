#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key;
    bool found = false;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            cout << "Found at index: " << i;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Not found";
    }
    return 0;
}
