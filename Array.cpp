#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the size of array: ";
    cin >> n;

    int a[50];

    cout << "Enter elemnts of array: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << "Arrays is" << endl;

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}