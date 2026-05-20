#include<iostream>
#include<stdio.h>
using namespace std;
//using Recursion
int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;
}
//using loop
int fact1(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"The factorial of "<<a<<" is: "<<fact(a)<<endl;
    cout<<"Using loop: "<<fact1(a)<<endl;
    return 0;
}