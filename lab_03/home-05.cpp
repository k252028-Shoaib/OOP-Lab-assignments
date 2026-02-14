#include <iostream>
using namespace std;

class Car{
    private:
        string model;
        float price;
    public:
        Car(string m, float p){
            model = m;
            price = p;
        }
        Car(const Car& c){
            model = c.model;
            price = c.price * 0.9;
        }
        void show(){
            cout << "Car model : " << model << endl;
            cout << "Car price : " << price << endl;
        }
};

int main (){
    Car c1("Corolla 2026", 100000);
    c1.show();
    Car c2(c1);
    c2.show();
    return 0;
}