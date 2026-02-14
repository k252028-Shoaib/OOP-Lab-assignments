#include <iostream>
using namespace std;

class Deep {
public:
    int* data;

    // constructor
    Deep(int value) {
        data = new int(value);
    }

    // deep Copy Constructor
    Deep(Deep& obj){
        data = new int(*obj.data); // allocates new memory and copies value
    }

    void display(){
        cout << "Data: " << *data << ", Address: " << data << endl;
    }

};

int main(){
    Deep obj1(20);
    Deep obj2(obj1); // deep copy

    obj1.display();
    obj2.display();

}