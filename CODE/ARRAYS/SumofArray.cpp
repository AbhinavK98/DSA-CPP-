#include<iostream>
using namespace std;

SumofArray(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    return sum;
    }

int main()
{
   int size;

    cin>> size;

    int num[100];

    //taking input of array 
    for(int i=0; i<size; i++)
    {
        cin>>num[i];
    }

    cout<<"Sum of elements of Array is: "<<SumofArray(num,size)<<endl;

    
}