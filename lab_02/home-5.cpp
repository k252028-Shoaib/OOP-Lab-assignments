#include <iostream>
using namespace std;

class book{
    private:
        int id;
        int borrowed = 0; //0 if not borrowed (returned), 1 if borrowed
    public:
        void set_ID(int i){
            id = i;
        }
        void borrow(){
            if (borrowed == 1){ 
                cout << "Book is already borrowed!" << endl;
                return;
            }
            borrowed = 1;
            cout << "Operation successful" <<endl;
        }
        void returnn(){
            if (borrowed == 0) {
                cout << "Book is already returned!" << endl;
                return;
            }
            borrowed = 0;
            cout << "Operation successful" <<endl;
        }
};

int main(){
    book b1;
    b1.set_ID(1);
    b1.borrow();
    b1.returnn();
    return 0;
}