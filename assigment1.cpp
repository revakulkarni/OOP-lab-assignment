#include <iostream>
#include <string>
using namespace std;


class Employee {
    string name;
    int employeeID;
    string dept;
    string doj;
    string address;
    string tele_number;
    static int employeeCount;
public:
Employee() {
        name = "Reva";
        employeeID = 0;
        dept = "COMP";
        doj = "21-04-2024";
        address = "MMCOE ";
        tele_number = "7564539239";
        employeeCount++;
    }
    Employee(string nm, int ID, string dept1, string doj1, string contactAddress, string phoneNumber) {
        name = nm;
        employeeID = ID;
        dept = dept1;
        doj = doj1;
        address = contactAddress;
        tele_number = phoneNumber;
        employeeCount++;
    }
    Employee(const Employee &emp) {
        name = emp.name;
        employeeID = emp.employeeID;
        dept = emp.dept;
        doj = emp.doj;
        address = emp.address;
        tele_number = emp.tele_number;
        employeeCount++;
    }
    void accept() {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> employeeID;
        cout << "Enter department: ";
        cin >> dept;
        cout << "Enter date of joining: ";
        cin >> doj;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter telephone number: ";
        cin >> tele_number;
        employeeCount++;
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nDepartment: " << dept;
        cout << "\nDate of Joining: " << doj;
        cout << "\nAddress: " << address;
        cout << "\nTelephone number: " << tele_number;
    }
    static int getEmployeeCount() {
        return employeeCount;
    }
    inline void title() {
        cout << "\n\n***** Employee Management System *****\n";
    }
    friend void show_count();
};
int Employee::employeeCount = 0;
void show_count() {
    cout << "\nTotal employees (via friend): " << Employee::getEmployeeCount();
}
int main() {
    Employee emp1;
    emp1.title();
    emp1.display();
    Employee emp2("Avni", 1234567, "Design", "05-07-2025", "Avenue Park", "4567891234");
    emp2.display();
    Employee emp3 = emp2;
    emp3.display();
    Employee *ptr1 = new Employee("genny", 12345, "Engineering", "2023-01-15", "cabin B-3", "555-1234");
    ptr1->display();
    delete ptr1;
    cout << "\n\nTotal employees: " << Employee::getEmployeeCount() << endl;


    return 0;
}
