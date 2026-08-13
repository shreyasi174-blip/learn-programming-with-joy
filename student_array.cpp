#include<iostream>
using namespace std;

struct student {
    int roll;
    string name;
};

void insert(struct student a[], int *size) {
    cout << "Enter the number of students: ";
    cin >> *size;

    for(int i = 0; i < (*size); i++) {
        cout << "Enter " << i << "th student name and roll: ";
        cin >> a[i].name >> a[i].roll;
    }
    cout << endl;
}

void del(struct student a[], int *size) {
    cout << "Which position you want to delete: ";
    int pos;
    cin >> pos;

    if(pos >= 0 && pos < *size) {
        for(int i = pos; i < *size - 1; i++) {
            a[i] = a[i + 1];
        }
        *size = *size - 1;
        cout << "Student deleted successfully!" << endl;
    }
    else {
        cout << "Invalid position!" << endl;
    }
}

void display(struct student a[], int size) {
    if(size == 0) {
        cout << "No students available!" << endl;
        return;
    }

    for(int i = 0; i < size; i++) {
        cout << "Student name is: " << a[i].name
             << " , and roll is " << a[i].roll << endl;
    }
}

int main() {

    struct student s[100];
    int size = 0, choice;

    do {
        cout << "\n1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter the choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                insert(s, &size);
                break;

            case 2:
                del(s, &size);
                break;

            case 3:
                display(s, size);
                break;

            case 4:
                cout << "Exiting program" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
