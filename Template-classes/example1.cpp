#include<iostream>
using namespace std;
template<typename T>
class Rectangle {
private:
    T length;
    T breadth;
public:
    Rectangle(T l, T b) : length(l), breadth(b) {}
    T area() {
        return length * breadth;
    }
    T perimeter() {
        return 2 * (length + breadth);
    }
};
template<typename T>
class Arithmetic{
    private:
    T a,b;
    public:
    Arithmetic(T a,T b);
    T add();
    T subtract();
};
template<typename T>
Arithmetic<T>::Arithmetic(T a,T b){ 
    this->a=a;
    this->b=b;
}
template<typename T>
T Arithmetic<T>::add(){
    return a+b;
}       
template<typename T>
T Arithmetic<T>::subtract(){
    return a-b;
}
int main() {
    Rectangle<int> r1(10, 5);
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    Arithmetic<int> ar(10, 5);
    cout << "Addition: " << ar.add() << endl;
    cout << "Subtraction: " << ar.subtract() << endl;

    return 0;
}