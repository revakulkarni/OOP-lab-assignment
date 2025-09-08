#include <iostream>
using namespace std;
class Complex {
   float x;
   float y;
public:
   Complex()  {     //Default constructor
   x=0;
   y=0;
   }
   Complex operator+(Complex);   //Member function
   friend Complex operator*(Complex, Complex);  //Friend function
   //Overload operators << and >>
   friend istream& operator>>(istream&,Complex&);
   friend ostream& operator<<(ostream&,Complex&);
};
Complex Complex::operator+(Complex c) {
   Complex temp;
   temp.x = x + c.x;
   temp.y = y + c.y;
   return temp;
}
Complex operator*(Complex c1,Complex c2) {
   Complex temp;
   temp.x = c1.x * c2.x - c1.y * c2.y;
   temp.y = c1.x * c2.y + c1.y * c2.x;
   return temp;
}
//Function definition
istream& operator>>(istream& in, Complex& c)  {
cout<<"Enter real number:";
in>>c.x;
cout<<"Enter imaginary number: ";
in>>c.y;
return in;
}
ostream& operator<<(ostream& out, Complex& c) {
out<<"="<<c.x<<"+";
out<<c.y<<"i";
   return out;
}
int main() {
   Complex c1, c2, c3,c4;
   cout<<"Enter first complex number\n";
   //Function call
   cin>>c1;
   cout<<c1;
   cout<<"\n\nEnter second complex number\n";
   cin>>c2;
   cout<<c2;
   c3 = c1 + c2;
   cout<<"\n\nSum of the two complex numbers"<<c3<<endl;
   c4 = c1 * c2;
   cout<<"\nProduct of the two complex numbers"<<c4<<endl;
   return 0;
}
