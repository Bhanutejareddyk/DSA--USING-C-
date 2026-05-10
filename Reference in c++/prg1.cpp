#include <iostream>
using namespace std;

// Function using reference to swap two numbers
void swapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Function using reference to update value
void updateValue(int &x)
{
    x = x + 10;
}

// Function using reference array
void displayArray(int (&arr)[100], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int a = 10, b = 20, choice, n, pos, val;
    int arr[100];

    do
    {
        cout << "\n--- REFERENCES IN C++ MENU ---\n";
        cout << "1. Basic Reference\n";
        cout << "2. Modify Variable Using Reference\n";
        cout << "3. Swap Two Numbers Using Reference\n";
        cout << "4. Pass Reference to Function\n";
        cout << "5. Array Using Reference\n";
        cout << "6. Update Array Element Using Reference\n";
        cout << "7. Reference with User Input\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int &ref = a;
                cout << "Value of a = " << a << endl;
                cout << "Reference ref = " << ref << endl;
                cout << "Address of a = " << &a << endl;
                cout << "Address of ref = " << &ref << endl;
                break;
            }

            case 2:
            {
                int &ref = a;
                cout << "Old Value of a = " << a << endl;
                ref = 50;
                cout << "New Value of a = " << a << endl;
                break;
            }

            case 3:
            {
                cout << "Before Swap: a = " << a << " b = " << b << endl;
                swapValues(a, b);
                cout << "After Swap: a = " << a << " b = " << b << endl;
                break;
            }

            case 4:
            {
                cout << "Before Update a = " << a << endl;
                updateValue(a);
                cout << "After Update a = " << a << endl;
                break;
            }

            case 5:
            {
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter array elements:\n";
                for(int i = 0; i < n; i++)
                    cin >> arr[i];

                cout << "Array elements are:\n";
                displayArray(arr, n);
                break;
            }

            case 6:
            {
                cout << "Enter position to update: ";
                cin >> pos;

                if(pos < 1 || pos > n)
                {
                    cout << "Invalid Position!\n";
                }
                else
                {
                    int &ref = arr[pos - 1];
                    cout << "Old Value = " << ref << endl;

                    cout << "Enter new value: ";
                    cin >> ref;

                    cout << "Updated Successfully.\n";
                }
                break;
            }

            case 7:
            {
                int x;
                cout << "Enter value: ";
                cin >> x;

                int &ref = x;

                cout << "Original Value = " << x << endl;

                ref = ref + 100;

                cout << "After Reference Modification = " << x << endl;
                break;
            }

            case 8:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 8);

    return 0;
}