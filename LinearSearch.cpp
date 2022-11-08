#include<iostream>
using namespace std;

int linearsearch(int arr[] , int n , int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[50];

    cout << "Enter the elements of array" << endl;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array is" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout << linearsearch(arr , n , key);

    return 0;
}