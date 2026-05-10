#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
// Pass by reference
void initialize(Rectangle &r, int l, int b)
{
    r.length = l;
    r.breadth = b;
}
// Pass by value
int area(Rectangle r)
{
    return r.length * r.breadth;
}
// Pass by pointer
void changeLength(Rectangle *r, int l)
{
    r->length = l;   //use arrow operator
}

int main()
{
    Rectangle r1;

    initialize(r1, 10, 5);   //pass object (not address)
    cout << "Area: " << area(r1) << endl;

    changeLength(&r1, 15);   //pointer needs address
    cout << "New Area: " << area(r1) << endl;

    return 0;
}