#include<iostream>
using namespace std;
//using Recursion
int sum(int n){
    if(n==0)
    return 0;
    return sum(n-1)+n;
}
//using formula n(n+1)/2
int sum1(int n){
    return n*(n+1)/2;
}
//using loop
int sum3(int n){
    int s=0;
    for(int i=1;i<=n;i++)
        s=s+i;
    
    return s;
}
int main(){
    int x;
    cout<<"Enter the nth number:";
    cin>>x;
    cout<<"The sum of first "<<x<<" natural numbers is: "<<sum(x)<<endl;
    cout<<"Using formula: "<<sum1(x)<<endl;
    cout<<"Using loop: "<<sum3(x)<<endl;
    return 0;
}