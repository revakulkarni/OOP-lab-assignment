#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Inventory{
public:
int itemID;
string name;
int quantity;
int cost;

void getinfo(){
        cout << "Enter item code: ";
        cin >> itemID;
        cout << "Enter item name: ";
        cin>>name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> cost;
    }


void display(){
cout << "\nItem ID: " << itemID << endl;
cout << "Name of the Item: " << name << endl;
cout << "Item Quantity: " << quantity << endl;
cout << "Item Price: " << cost << endl;
}
};
int main(){
int a;
cout<<"enter the number of items:";cin>>a;
ofstream obje;
Inventory obj[a];
for(int i=0; i<a; i++){
obj[i].getinfo();
obje.open("Input1.txt");
obje.write((char* )&obj, sizeof(obj));
obje.close();
  }
 
  cout<<"\nInventory details"<<endl;
 
for(int i=0; i<a; i++){
ifstream obje2;
obje2.open("Input1.txt");
obje2.read((char*) &obj, sizeof(obj));
obj[i].display();
obje2.close();
  }
 
return 0;
}
