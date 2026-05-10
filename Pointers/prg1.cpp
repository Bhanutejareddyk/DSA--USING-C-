#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, n, i, choice;
    int *ptr, *p1, *p2;
    int arr[100];

    do {
        cout << "\n--- POINTER OPERATIONS MENU ---\n";
        cout << "1. Display Value and Address\n";
        cout << "2. Modify Value Using Pointer\n";
        cout << "3. Swap Two Numbers Using Pointers\n";
        cout << "4. Array Traversal Using Pointer\n";
        cout << "5. Pointer Arithmetic\n";
        cout << "6. Dynamic Memory Allocation\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                ptr = &a;
                cout << "Value of a = " << a << endl;
                cout << "Address of a = " << ptr << endl;
                cout << "Value using pointer = " << *ptr << endl;
                break;

            case 2:
                ptr = &a;
                cout << "Old value of a = " << a << endl;
                *ptr = 50;
                cout << "New value of a = " << a << endl;
                break;

            case 3: {
                p1 = &a;
                p2 = &b;

                cout << "Before Swap: a = " << a << " b = " << b << endl;

                int temp = *p1;
                *p1 = *p2;
                *p2 = temp;

                cout << "After Swap: a = " << a << " b = " << b << endl;
                break;
            }

            case 4:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter array elements:\n";
                for(i = 0; i < n; i++)
                    cin >> arr[i];

                ptr = arr;

                cout << "Array elements using pointer:\n";
                for(i = 0; i < n; i++)
                    cout << *(ptr + i) << " ";

                cout << endl;
                break;

            case 5:
                ptr = arr;
                cout << "Base Address = " << ptr << endl;
                cout << "Next Address = " << ptr + 1 << endl;
                cout << "Second Next Address = " << ptr + 2 << endl;
                break;

            case 6:
                ptr = new int;
                cout << "Enter value: ";
                cin >> *ptr;

                cout << "Value stored dynamically = " << *ptr << endl;

                delete ptr;
                cout << "Memory Deleted Successfully.\n";
                break;

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}