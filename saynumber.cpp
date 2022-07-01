#include <iostream>
using namespace std;

void saynumber(int n ,string arr[]){
    if (n==0){
        return ;
    }
    int digi = n%10;
    n=n/10;
    saynumber(n,arr);
    cout << arr[digi]<<"  "; 

}

int main()
{
    int n;
    cout << "Enter number : " << endl;
    cin >> n;

    string arr[10] = {
        "Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    saynumber(n,arr);

    
}