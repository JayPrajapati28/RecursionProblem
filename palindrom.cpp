#include<iostream>
using namespace std;
//recursive way checkning 
bool chek(string s, int i,int j){

    if (i>j){
        return true;
    }
    if (s[i]!=s[j]){
        return false;
    }
    else{
        //recursive call 
        return chek(s,i+1,j-1);
    }

}

//itretive way checking palindrom

bool checkeplindrom(string s ,int n ){
    int i =0 ;
    int j =n-1;

    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        else if(s[i]==s[j]){
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    string s = "abbcbba";
    int n = s.length()-1;

    //x= checkeplindrom(s,n);
    int k=chek(s,0,n);
    if(k){
        cout << "string is palindrom";
    }
    else{
        cout << "string is not palindrom";
    }
}