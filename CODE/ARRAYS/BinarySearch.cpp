#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;//THIS IS SAME AS START+END/2 BUT THIS WILL HELP US FROM FALLING OUTSIDE INT RANGE

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        //if value of key is greater than mid then to go right

        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{//key<arr[mid]
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

int main()
{
    //input of odd and even array
    int even[6]={2,3,6,7,8,9};
    int odd[5]={11,12,45,67,89};

    int evenindex=BinarySearch(even, 6, 9);
    cout<<"Index of key("<<even[evenindex]<<") is : "<<evenindex<<endl;
    
    int oddindex=BinarySearch(odd, 5, 89);
    cout<<"Index of key("<<odd[oddindex]<<") is : "<<oddindex<<endl;
    
    return 0;
}