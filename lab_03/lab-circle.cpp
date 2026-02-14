#include <iostream>
using namespace std;

class circle{
    private:
        float radius;
    public:
        circle(float r) : radius(r){
            cout << "Circle objected created with radius " << radius << endl;
        }

        float area(){
            return 3.14*radius*radius;
        }

        ~circle(){
            cout << "Circle object destroyed\n";
        }
};

int main (){
    circle c1(5);
    cout << "Area of the circle is " << c1.area() << endl;
    return 0;
}