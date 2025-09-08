#include <iostream>
#include <string>
using namespace std;

class employee {
    string name;
    int id;
    string dept;
    string date;
    string add;
    string tele;
    static int count;

public:
    inline void intro(void) {
        cout << "\n-----EMPLOYEE INFORMATION SYSTEM-----\n";
    }

    void accept();
    void display();

    // Default constructor
    employee() {
        name = "Unknown";
        id = 0;
        dept = "xyz";
        date = "00/00/0000";
        add = "unknown";
        tele = "0000";
        cout << "You are in Default Constructor\n";
        count++;
    }

    // Parameterized constructor
    employee(string n, int i, string d, string dat, string a, string t) {
        name = n;
        id = i;
        dept = d;
        date = dat;
        add = a;
        tele = t;
        cout << "\n\nYou are in Parameterized Constructor\n";
        count++;
    }

    // Copy constructor
    employee(employee &e) {
        name = e.name;
        id = e.id;
        dept = e.dept;
        date = e.date;
        add = e.add;
        tele = e.tele;
        cout << "\n\nYou are in Copy Constructor\n";
        count++;
    }

    ~employee() {
        cout << "\nNo.of objects destroyed:" << count;
        count--;
    }

    static void showcount(void) {
        cout << "\n\nTotal no. of objects: " << count;
    }
};

int employee::count = 0;

void employee::accept() {
    cout << "\n\nEnter employee name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter Department name: ";
    cin >> dept;
    cout << "Enter joining date (dd/mm/yy): ";
    cin >> date;
    cout << "Enter contact address: ";
    cin >> add;
    cout << "Enter telephone number: ";
    cin >> tele;
}

void employee::display() {
    cout << "\nDisplaying employee details";
    cout << "\nName of employee: " << name;
    cout << "\nEmployee ID: " << id;
    cout << "\nDepartment: " << dept;
    cout << "\nJoining date: " << date;
    cout << "\nContact address: " << add;
    cout << "\nTelephone number: " << tele;
}

int main() {
    employee obj1;
    obj1.intro();
    obj1.display();
    obj1.accept();
    obj1.display();
    employee::showcount();

    // Object for using parameterized constructor
    employee obj2("Kavya", 102, "tech", "21/02/2024", "Pune", "8123345541");
    obj2.display();
    employee::showcount();

    // Object for using copy constructor
    employee obj3 = obj2;
    obj3.display();
    employee::showcount();

    // Object created dynamically
    employee *obj4 = new employee("Ananya", 104, "sales", "01/02/2023", "nashik", "9485698741");
    obj4->intro();
    obj4->display();
    employee::showcount();
    delete obj4;
    
    return 0;
}
