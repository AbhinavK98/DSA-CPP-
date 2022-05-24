#include<iostream>
using namespace std;
int FirstOccur(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;//THIS IS SAME AS START+END/2 BUT THIS WILL HELP US FROM FALLING OUTSIDE INT RANGE
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
           ans=mid;
           end=mid-1;
        }

        //if value of key is greater than mid then to go right

       else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}
int LastOccur(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;//THIS IS SAME AS START+END/2 BUT THIS WILL HELP US FROM FALLING OUTSIDE INT RANGE
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
           ans=mid;
            start=mid+1;
        }

        //if value of key is greater than mid then to go right

       else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}

int main()
{
    //input of odd and even array
    int even[6]={3,3,7,8,9,9};

    cout<<"First occurrance of (9) is : "<<FirstOccur(even, 6, 9)<<endl;
    cout<<"Last occurrance of (9) is : "<<LastOccur(even, 6, 9)<<endl;
    return 0;
}