#include <iostream>
using namespace std;

class Shallow {
public:
    int* data;

    // constructor
    Shallow(int value){
        data = new int(value);
    }

    // shallow Copy Constructor
    Shallow(Shallow& obj){
        data = obj.data; // copies the pointer, NOT the actual value
    }

    void display(){
        cout << "Data: " << *data << ", Address: " << data << endl;
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2(obj1); // shallow copy

    obj1.display();
    obj2.display();

}