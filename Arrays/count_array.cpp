// Program:Count positive,negative and zero in array
// author: Gaurav
#include <iostream>
using namespace std;
void countElements(int arr[], int n)
{
    int pos = 0;
    int neg = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Zero: " << zero << endl;
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countElements(arr, n);
}
