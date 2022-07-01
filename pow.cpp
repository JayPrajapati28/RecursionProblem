#include<iostream>
using namespace std;
int pow(int n){
    //base case 
    if(n==0){
        return 1;
    }
    //Recursive relations 
    return 2*pow(n-1);
}
int main()
{
    int n ;
    cin >> n ;

    int ans = pow(n);

    cout << "Power is :"<<pow(n)<<endl;
}