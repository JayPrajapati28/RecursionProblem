#include <iostream>
using namespace std;



int sum2(int* arr , int n){
    //recursive base case
    if (n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int sum = arr[0]+sum2(arr+1,n-1);
    return sum ;

}

int sum1(int* arr, int n ){
    int ans=0;
    for (int i=0 ; i <n ;i++)
    {
        ans +=arr[i];
    }
    return ans ;
}
int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n ;
    int* arr = new int[n];
    for (int i =0 ;i<n ; i++)
    {
        cin >> arr[i];
    }
    // cout << "sum of arr is itretive way:"<< sum1 (arr,n)<<endl;
    // for (int i =0 ; i <n ;i++)
    // {
    //     cout << arr[i]<<"  " ;
    // }
    cout << "sum of arr is resursive way:"<< sum2(arr,n)<<endl;
}
