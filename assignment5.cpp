#include <iostream>
using namespace std;

class Shape {
protected:
    float a, b;
public:
    void getData() {
        cout << "Enter first dimention: ";
        cin >> a ;
        cout << "Enter second dimention: ";
        cin >> b;
    }
    virtual void displayArea() {
        cout << "Area cannot be defined in base class\n";
    }
};
class Triangle : public Shape {
public:
    void displayArea() override {
        cout << "Area of Triangle = " << 0.5 * a * b << endl;
    }
};
class Rectangle : public Shape {
public:
    void displayArea() override {
        cout << "Area of Rectangle = " << a * b << endl;
    }
};
int main() {
    Shape *st;
    Triangle t;
    Rectangle r;
  
        st = &t;
     st->getData();
    st->displayArea();
        st = &r;
      st->getData();
    st->displayArea();

        return 0;
}
