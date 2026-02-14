#include <iostream>
using namespace std;

class box{
    private:
        int length, breadth, height;
    public:
        box(){
            length = breadth = height = 1;
        }
        box(int l,int b,int h){
            length = l;
            breadth = b;
            height = h;
        }
        int calculateVolume(){
            return length * breadth * height;
        }
};

int main (){
    box b1;
    cout << b1.calculateVolume() << endl;
    box b2(2,3,4);
    cout << b2.calculateVolume() << endl;
    return 0;
}