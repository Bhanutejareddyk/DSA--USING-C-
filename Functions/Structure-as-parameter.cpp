#include<iostream>
using namespace std;

// Structure for Rectangle
struct Rect{
    int len;   // Length of rectangle
    int bred;  // Breadth of rectangle
};

// Function using PASS BY VALUE
int area1(struct Rect r1){ 
    r1.len++;  // Increment affects only copy
    return r1.len * r1.bred;
}

// Function using PASS BY REFERENCE
int area2(struct Rect &r1){ 
    r1.len++;  // Increment affects original
    return r1.len * r1.bred;
}

// Function using POINTER
void changelength(struct Rect *p, int l){
    p->len = l;  // Directly modifies original using pointer
}

// Structure with array
struct Test{
    int a[5];  // Array of size 5
    int n;     // Number of elements
};

// Function using PASS BY VALUE (no change in original)
void fun(struct Test t1){
    t1.a[0] = 1;  // Changes only local copy
    t1.a[1] = 3;
}
int main(){

    // Declare rectangle
    struct Rect r;

    // Taking input
    cout << "Enter Length and Breadth of Rectangle: ";
    cin >> r.len >> r.bred;

    // Pass by value (original not modified)
    cout << "Area using area1 (Pass by Value): " << area1(r) << endl;

    // Pass by reference (original modified)
    cout << "Area using area2 (Pass by Reference): " << area2(r) << endl;

    // Change length using pointer
    changelength(&r, 20);

    // Again calling functions
    cout << "After changing length to 20:" << endl;

    cout << "Area using area1 (Pass by Value): " << area1(r) << endl;
    cout << "Area using area2 (Pass by Reference): " << area2(r) << endl;

    // Initialize structure with array
    struct Test t = {{2,4,6,8},5};  
    // Note: last element becomes 0 automatically → {2,4,6,8,0}

    // Function call (no change in original due to pass by value)
    fun(t);

    // Display array to prove no change
    cout << "Array after fun() call: ";
    for(int i = 0; i < t.n; i++){
        cout << t.a[i] << " ";
    }

    return 0;
}