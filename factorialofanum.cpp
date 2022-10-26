#include<iostream>
int fact( int );
using namespace std;

main(){
    int n,f;
    cout<<"enter the number : ";
    cin>>n;
    f = fact(n);
    cout<<f;
}

int fact(int n){
    int f;
    if(n == 0)
        return 1;
    else{
        f = fact(n-1);
    }
    return n*f;
}