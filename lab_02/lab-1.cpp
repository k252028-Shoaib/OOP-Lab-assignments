#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    int id;
    string name;

public:
    int getID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    void setID(int id2)
    {
        id = id2;
    }
    void setName(string name2)
    {
        name = name2;
    }
};

int main()
{
    student s1;
    s1.setID(1);
    s1.setName("Shoaib");
    cout << "Student ID: " << s1.getID() << endl;
    cout << "Student Name: " << s1.getName() << endl;
    cout << "blasf";
    return 0;
}