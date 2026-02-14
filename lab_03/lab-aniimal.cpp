    #include <iostream>
    using namespace std;

    class animal
    {
    private:
        string name;
        int age;

    public:
        animal()
        {
            cout << "Object created\n";
        }

        animal(string n, int a) : name(n), age(a)
        {
            cout << "Object created with the name " << name << " and age " << age << endl;
        }

        ~animal()
        {
            cout << "Object destroyed\n";
        }
    };

    int main()
    {
        animal a1;
        animal a2("Tiger", 10);
        return 0;
    }