// Program:Find sum and avg of guven number by user
// Author: Gaurav

#include <iostream>
using namespace std;
int main()
{
    int arr[50], n;
    int sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    float average = (float)sum / n;
    cout << "Sum=" << sum << endl;
    cout << "Average=" << average;
    return 0;
}