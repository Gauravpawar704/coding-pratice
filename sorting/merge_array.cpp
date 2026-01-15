// Program:merge two arrays
// author: Gaurav
#include <iostream>
using namespace std;
int main()
{
    int n1;
    int n2;
    int arr1[50];
    int arr2[50];
    int merge[100];
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements:\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        merge[i] = arr1[i];
    }
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements:\n";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
        merge[n1 + i] = arr2[i];
    }
    cout << "Merged array:\n";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merge[i] << " ";
    }
    return 0;
}
