#include<iostream>
using namespace std;
bool binary(int* arr,int s,int e ,int key)
{
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
        binary(arr,mid+1,e,key);
    }
    else{
        binary(arr,s,mid-1,key);
    }

return false;

}

int main()
{
    int arr[]={2,4,6,10,14,16};
    int n =6;
    int key = 19;
    int s =0 ,e=n;

    int ans = binary(arr,s,e,key);
    cout << ans <<endl;
    if(ans){
        cout << "present in the array"<<endl;
    }
    else{
        cout << "not in the array" << endl;
    }


return 0 ;
}