#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int marks;
    public:
        Student(){
            name = "";
            marks = 0;
        }
        Student(string n, int m){
            name = n;
            marks = m;
        }
};

int main (){
    Student s1; //default constructor
    Student s2("Shoaib Moin", 100); // parametarized constructor
    return 0;
}