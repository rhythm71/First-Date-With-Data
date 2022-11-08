#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the siz eof array: ";
    cin >> n;

    int arr[50];
     
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number which you want to delete: ";
    cin >> num;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            int j=i;
        }
    }
int j;
    for(int i = j; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n=n-1;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}