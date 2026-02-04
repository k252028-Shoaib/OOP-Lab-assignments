#include <iostream>
using namespace std;

class ShoppingCart{
    private:
        float price[5];//an array where each element tells the unit price of an item. There are 50 items
        int quantity[5] = {1,1,1,1,1};//each element corresponds to the element in the price array
    public:
        ShoppingCart(float a, float b,float c,float d,float e){
            price[0] = a;
            price[1] = b;
            price[2] = c;
            price[3] = d;
            price[4] = e;
        }
        float Calculate_total(){
            float total = 0;
            for (int i = 0; i < 5; i++){
                total = total +(price[i]*quantity[i]);
            }
            return total;
        }
};

int main(){
    ShoppingCart c1(5,2,10.8,1,55.34);
    cout << "Total is " << c1.Calculate_total();
    return 0;
}