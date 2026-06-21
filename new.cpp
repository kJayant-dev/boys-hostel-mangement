#include <iostream>
using namespace std;

class Boys_Hostel {
public:
    string name;
    int id;
    int age;
    int no_of_days;

    Boys_Hostel() {
        // default constructor
    }
};

// calculate fees
int fees(Boys_Hostel a) {
    return a.no_of_days * 115;
}

// display all students
void display(Boys_Hostel b[], int total) {
    cout << endl;
    for (int i = 0; i < total; i++) {
        cout << "Name of Student : " << b[i].name << endl;
        cout << "ID of Student   : " << b[i].id << endl;
        cout << "Age of Student  : " << b[i].age << endl;
        cout << "No of days stay : " << b[i].no_of_days << endl;
        cout << "Fees            : " << fees(b[i]) << endl;
        cout << "---------------------------\n";
    }
}

int main() {

    Boys_Hostel arr[5];   // single array
    int total = 0;        // number of students stored

    while (1) {
        int n;
        cout << "\nWhat you want to do!\n";
        cout << "1. Add Details\n";
        cout << "2. Print Details\n";
        cout << "3. Calculate Fees of a Student\n";
        cout << "4. Exit\n";
        cout << "Select (1-4): ";
        cin >> n;

        // ADD DETAILS
        if (n == 1) {
            cout << "How many students do you want to add (max 5): ";
            cin >> total;
            cin.ignore();

            for (int i = 0; i < total; i++) {
                cout << "\nEnter Name of Student: ";
                getline(cin, arr[i].name);

                cout << "Enter ID of Student: ";
                cin >> arr[i].id;

                cout << "Enter Age of Student: ";
                cin >> arr[i].age;

                cout << "Enter No of days: ";
                cin >> arr[i].no_of_days;
                cin.ignore();
            }
        }

        // PRINT ALL DETAILS
        else if (n == 2) {
            if (total == 0) {
                cout << "No student data available. Please add details first.\n";
            } 
            else {
                display(arr, total);
            }
        }

        // CALCULATE FEES BY ID
        else if (n == 3) {
            if (total == 0) {
                cout << "No student data available.\n";
                continue;
            }

            int searchId;
            cout << "Enter Student ID: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < total; i++) {
                if (arr[i].id == searchId) {
                    cout << "Fees of Student (" << arr[i].name << ") is: "
                         << fees(arr[i]) << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student ID not found!\n";
            }
        }

        // EXIT
        else if (n == 4) {
            cout << "Exiting program...\n";
            break;
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
