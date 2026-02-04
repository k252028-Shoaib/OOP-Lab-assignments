#include <iostream>
using namespace std;

class Employee{
    private:
        string name;
        int id;
    public:
        void set_details(string n, int i) {
            name = n;
            id = i;
        }

        void get_details() {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};

class Manager : public Employee {
    private:
        int bonus;
    public:
        void set_bonus(int b){
            bonus = b;
        }
        void get_bonus(){
            cout << "Special bonus is $" << bonus << endl;
        }
};

int main(){
    Manager m1;
    m1.set_details("Manager", 1);
    m1.get_details();
    m1.set_bonus(100);
    m1.get_bonus();
    return 0;
}