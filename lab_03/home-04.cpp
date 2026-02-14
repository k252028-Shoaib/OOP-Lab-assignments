#include <iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int xp, int yp){
            x = xp;
            y = yp;
        }
        Point(const Point &p){
            x = p.x;
            y = p.y;
        }
        void display(){
            cout << "x : " << x << endl;
            cout << "y : " << y << endl;
        }
};

int main (){
    Point p1(5,4);
    p1.display();
    Point p2(p1);
    p2.display();
    return 0;
}