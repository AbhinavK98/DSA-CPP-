#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;

    cout << "enter the size of array :" << endl;

    cin >> size;

    cout << "enter the elements of array :" << endl;
    
    int num[100];

    // taking input of array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    int key;
    cout << "Enter the key to search element :" << endl;
    cin >> key;

    bool found = search(num, size, key);

    if (found)
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "key not-found" << endl;
    }
}