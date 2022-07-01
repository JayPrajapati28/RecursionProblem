#include<iostream>
using namespace std;
void reverse(string& arr,int i , int j ){
    if (i<j){
        return ;
    }
    swap(arr[i],arr[j]);
    i++;
    j--;
    reverse(arr,i,j);
}
int main()
{
    string arr="abcdef";
    int n = 6;
    cout << n <<endl;   
    //----recursive function ---
     reverse(arr,0,arr.length()-1);
      for(int i =0 ; i <6;i++){
        cout << arr[i]<<" ";
    }
    //below the code is for the ittretive way
    
    // while(i<j){
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }
   

}