#include <iostream>

using namespace std;

typedef struct student{
    int id;
    string name;
}student;

int main (){
    student *s1 = new student;
    s1->id = 2028;
    s1->name = "Shoaib Moin";
    cout << s1->id << "  "<< s1->name << endl;
    delete s1;
    return 0;
}