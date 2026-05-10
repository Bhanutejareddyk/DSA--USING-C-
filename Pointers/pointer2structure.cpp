#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
 struct rectangle{
    int len;
    int bred;
 };
 int main(){
   //  rectangle r={10,15};
   //  cout<<r.len<<" "<<r.bred<<endl;
   //   rectangle *p=&r;
    rectangle *p;
    p=(rectangle*)malloc(sizeof(rectangle));
    p->len=200;
    p->bred=300;
    cout<<p->len<<" "<<p->bred<<endl;
    cout<<"area of rectangle is "<<p->len*p->bred<<endl;
    return 0;

 }