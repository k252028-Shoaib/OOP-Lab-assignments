#include <iostream>
using namespace std;

class BankAccount{
    private:
        float balance;
    public:
        BankAccount(float b){
            balance = b;
        }
        BankAccount(const BankAccount& BA){
            balance = BA.balance;
            cout << "Copy constructor called!" << endl;
        }
        float get_balance(){
            return balance;
        }
};

BankAccount pass_return(BankAccount BA){
    cout << BA.get_balance() << endl; //passed by value
    return BA;//returned by value
}

int main (){
    BankAccount b1(100);
    BankAccount b2 = pass_return(b1); //initialised one object from another
    return 0;
}