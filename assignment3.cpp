#include <iostream>
#include <string>
using namespace std;

class Staff {
protected:
    string staffName, staffDepartment;
    int staffID;

public:
    void acceptDetails() {
        cout << "\nEnter Staff name: ";
        cin >> staffName;
        cout << "Enter Staff department: ";
        cin >> staffDepartment;
        cout << "Enter Staff ID: ";
        cin >> staffID;
    }

    void displayDetails() {
        cout << "\nStaff name: " << staffName;
        cout << "\nStaff department: " << staffDepartment;
        cout << "\nStaff ID: " << staffID;
    }
};

class Teacher : public Staff {
    string teacherRole, teacherSection;

public:
    void acceptTeacherDetails() {
        acceptDetails();
        cout << "Enter role: ";
        cin >> teacherRole;
        cout << "Enter section: ";
        cin >> teacherSection;
    }

    void displayTeacherDetails() {
        displayDetails();
        cout << "\nrole: " << teacherRole;
        cout << "\nsection: " << teacherSection;
    }
};

class SupportStaff : public Staff {
    string supportPosition;

public:
    void acceptSupportStaffDetails() {
        acceptDetails();
        cout << "Enter Support staff position: ";
        cin >> supportPosition;
    }

    void displaySupportStaffDetails() {
        displayDetails();
        cout << "\nSupport Staff position: " << supportPosition;
    }
};

int main() {
    int numTeachers, numSupportStaff;

    // Input for number of teachers
    cout << "Enter number of teachers: ";
    cin >> numTeachers;
    Teacher teachers[numTeachers];

    // Input for teacher details
    for (int i = 0; i < numTeachers; i++) {
        cout << "\nEnter details for Teacher " << i + 1 << ":\n";
        teachers[i].acceptTeacherDetails();
    }

    // Displaying teacher details
    cout << "\nDisplaying Details:";
    for (int i = 0; i < numTeachers; i++) {
        cout << "\n\nTeacher " << i + 1 << ":";
        teachers[i].displayTeacherDetails();
    }

    // Input for number of support staff
    cout << "\n\nEnter number of support staff: ";
    cin >> numSupportStaff;
    SupportStaff supportStaff[numSupportStaff];

    // Input for support staff details
    for (int i = 0; i < numSupportStaff; i++) {
        cout << "\nEnter details for Support Staff " << i + 1 << ":\n";
        supportStaff[i].acceptSupportStaffDetails();
    }

    cout << "\nDisplaying Support Staff Details:";
    for (int i = 0; i < numSupportStaff; i++) {
        cout << "\n\nSupport Staff " << i + 1 << ":";
        supportStaff[i].displaySupportStaffDetails();
    }

    return 0;
}
