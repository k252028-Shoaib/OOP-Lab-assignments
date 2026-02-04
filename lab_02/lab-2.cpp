#include <iostream>
#include <string>

using namespace std;

class animal
{
private:
    int age;
    string name;

public:
    void setAge(int a)
    {
        age = a;
    }
    void setName(string n);
    int getAge()
    {
        return age;
    }
    string getName();
};

string animal::getName()
{
    return name;
}
void animal::setName(string n)
{
    name = n;
}

int main()
{
    animal a1;
    a1.setAge(10);
    a1.setName("--");
    cout << a1.getAge() << endl;
    cout << a1.getName();
    return 0;
}
