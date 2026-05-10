#include<iostream>
using namespace std;
int add(int a,int b){//formal parameters
    return a+b;
}
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Sum is: " << add(x,y) << endl;//actual parameters
        return 0;
}