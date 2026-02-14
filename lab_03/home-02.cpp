#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length, breadth;
    public:
        Rectangle(){
            length = breadth = 1;
        }
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
};

int main (){
    Rectangle r1;
    cout << r1.area() << endl;
    Rectangle r2(10,10);
    cout << r2.area() << endl;
    return 0;
}