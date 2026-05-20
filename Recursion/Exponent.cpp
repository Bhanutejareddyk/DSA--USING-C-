#include<iostream>
using namespace std;
//using Recursion
int pow(int m,int n){
    if(n==0)
    return 1;
    return pow(m,n-1)*m;
}
//using loop
int pow1(int m,int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p*=m;
    }
    return p;
}
//using optimized recursion
int pow3(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return pow3(m*m,n/2);
    else
    return pow3(m*m,(n-1)/2)*m;
}
int main(){
    int x,y;
    cout<<"Enter the number and its power:";
    cin>>x>>y;
    cout<<x<<" raised to the power "<<y<<" is: "<<pow(x,y)<<endl;
    cout<<"Using loop: "<<pow1(x,y)<<endl;
    cout<<"Using optimized recursion: "<<pow3(x,y)<<endl;
    return 0;
}