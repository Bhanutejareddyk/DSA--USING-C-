#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor (Replaces initialize)
    Rectangle(int l=0, int b=0) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    int getLength() {
        return length;
    }
    void setLength(int l) {
        length = l;
    }
};

int main() {
    // Creating an object and initializing via Constructor
    int x,y;
    cout<<"Enter the values for length and bredth:";
    cin>>x>>y;
    Rectangle r(x,y);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    int z;
    cout<<"Enter the new length:";
    cin>>z;
    r.setLength(z);  // Using setter to change length
    cout << "New Area: " << r.area() << endl;
    cout << "New Perimeter: " << r.perimeter() << endl;
    cout<<"Current Length: "<<r.getLength()<<endl;  // Using getter to access length

    return 0;
}