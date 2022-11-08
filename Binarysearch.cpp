#include<iostream>
using namespace std;

int binarysearch(int arr[] , int n , int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid] > key)     
        {
            e = mid-1;
        }

        else
        {
            s = mid+1;
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
    cout << endl;

    cout << "Array is" << endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout << binarysearch(arr , n , key) << endl;

    return 0;
}