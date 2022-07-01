#include<iostream>
using namespace std;

int liner(int* arr , int n , int key )
{
    int s = 0 ;
    int e = n;

    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]==key){
            return mid+1;
        }
        else if (arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid =  s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter siz of array:";
    cin >> n ;
    int* arr = new int[n];

    for (int i =0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key which you want to find :";
    cin >> key;

    cout << "Key is at place :"<<liner(arr,n,key);

    return 0;
}