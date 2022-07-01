#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 0;
    }
    count(n-1);
    cout << n<<"  " ;
    
}
int main(){
    int n;
    cout << "Enter number :"<< endl;
    cin >> n ;

    cout << "Counting is " << endl;
    count(n); 
}