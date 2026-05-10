#include <iostream>
#include <string>
using namespace std;

// ---------- Simple Structure ----------
struct Student
{
    int id;
    string name;
    float marks;
};

// ---------- Nested Structure ----------
struct Address
{
    string city;
    string state;
};

struct Employee
{
    int empid;
    string empname;
    float salary;
    Address addr;
};

// ---------- Structure with Array ----------
struct Book
{
    int bookid;
    string title;
    float price;
};

// ---------- Functions ----------
void displayStudent(Student s)
{
    cout << "\nStudent Details:\n";
    cout << "ID    : " << s.id << endl;
    cout << "Name  : " << s.name << endl;
    cout << "Marks : " << s.marks << endl;
}

void updateMarks(Student &s)
{
    cout << "Enter new marks: ";
    cin >> s.marks;
    cout << "Marks Updated Successfully.\n";
}

int main()
{
    Student s1;
    Student students[100];
    Employee e1;
    Book b[100];

    int n, choice, i, pos;

    do
    {
        cout << "\n====== STRUCTURE MENU ======\n";
        cout << "1. Basic Structure Example\n";
        cout << "2. Array of Structures\n";
        cout << "3. Nested Structure Example\n";
        cout << "4. Structure Using Pointer\n";
        cout << "5. Update Structure Data\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nEnter Student ID: ";
                cin >> s1.id;

                cout << "Enter Name: ";
                cin >> s1.name;

                cout << "Enter Marks: ";
                cin >> s1.marks;

                displayStudent(s1);
                break;
            }

            case 2:
            {
                cout << "Enter number of students: ";
                cin >> n;

                for(i = 0; i < n; i++)
                {
                    cout << "\nEnter Student " << i + 1 << " ID: ";
                    cin >> students[i].id;

                    cout << "Enter Name: ";
                    cin >> students[i].name;

                    cout << "Enter Marks: ";
                    cin >> students[i].marks;
                }

                cout << "\n--- All Students ---\n";

                for(i = 0; i < n; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "ID    : " << students[i].id << endl;
                    cout << "Name  : " << students[i].name << endl;
                    cout << "Marks : " << students[i].marks << endl;
                }
                break;
            }

            case 3:
            {
                cout << "Enter Employee ID: ";
                cin >> e1.empid;

                cout << "Enter Name: ";
                cin >> e1.empname;

                cout << "Enter Salary: ";
                cin >> e1.salary;

                cout << "Enter City: ";
                cin >> e1.addr.city;

                cout << "Enter State: ";
                cin >> e1.addr.state;

                cout << "\nEmployee Details:\n";
                cout << "ID     : " << e1.empid << endl;
                cout << "Name   : " << e1.empname << endl;
                cout << "Salary : " << e1.salary << endl;
                cout << "City   : " << e1.addr.city << endl;
                cout << "State  : " << e1.addr.state << endl;
                break;
            }

            case 4:
            {
                Student *ptr = &s1;

                cout << "Enter Student ID: ";
                cin >> ptr->id;

                cout << "Enter Name: ";
                cin >> ptr->name;

                cout << "Enter Marks: ";
                cin >> ptr->marks;

                cout << "\nUsing Pointer:\n";
                cout << "ID    : " << ptr->id << endl;
                cout << "Name  : " << ptr->name << endl;
                cout << "Marks : " << ptr->marks << endl;
                break;
            }

            case 5:
            {
                cout << "Enter Student ID: ";
                cin >> s1.id;

                cout << "Enter Name: ";
                cin >> s1.name;

                cout << "Enter Marks: ";
                cin >> s1.marks;

                displayStudent(s1);

                updateMarks(s1);

                displayStudent(s1);
                break;
            }

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}