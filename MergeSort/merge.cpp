#include <iostream>
using namespace std;

void merge(int *arr,int s , int e ){
    int mid = (s+e)/2;
    int len1= mid-s+1;
    int len2 = e- mid;


    int *frist = new int[len1];
    int *second= new int[len2];

    //copy array
    //k = mainArray index
    int k = s ;
    for (int i= 0 ; i < len1 ; i++)
    {
        frist[i]=arr[k++];
    }
    k= mid +1;
    for (int i= 0 ; i < len2 ; i++)
    {
        second[i]=arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k=s;
    while(index1<len1 && index2 < len2){
        if (frist[index1] < second[index2]){
            arr[k++]=frist[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=frist[index1++];
    }
    while(index2 < len2){
          arr[k++]=second[index2++];
    }
}


void mergeSort(int *arr, int s, int e)
{
    //base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    //Right part
    mergeSort(arr,s,mid);
    //Left part  
;
    mergeSort(arr,mid+1,e);
 
    merge(arr,s,e);

}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    mergeSort(arr, 0, n - 1);
    for (int i =0; i<n;i++){
        cout << arr[i]<< endl;
    }
    return 0;
}