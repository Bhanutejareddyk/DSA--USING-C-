#include<iostream>
using namespace std;
int area(int len,int bred){
    return len*bred;
}
int perimeter(int len,int bred){
    return 2*(len+bred);
}
int main(){
    int x,y;
    cout<<"Enter the values for length and bredth:";
    cin>>x>>y;
    cout<<"Area of rectangle is:"<<area(x,y)<<endl;
    cout<<"Perimeter of rectangle is:"<<perimeter(x,y)<<endl;
    return 0;

}