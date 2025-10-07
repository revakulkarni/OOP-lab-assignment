#include <iostream>
using namespace std;

class Division {
public:
    double x, y;
    void get_data() {
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
    }
    void divide() {
        try {
           if (y == 0) {
            throw(y);              //Throw y if denominator is zero
        } else {
            cout<<"Division of both numbers is: "<< x / y <<endl;
           }
        }
        catch(double) {
            cout<<"Exception caught: Division by zero not allowed!"<<endl;
        }
    }
};
int main() {
    Division d;
    d.get_data();
    d.divide();
    return 0;
}
