#include <iostream>
using namespace std;

class RestaurantOrder{
    private:
        int id;
        float total;
    public:
        int get_ID();
        int get_Total();
        void set_ID(int id2);
        void set_Total(float t);
};

int RestaurantOrder::get_ID(){
    return id;
}
int RestaurantOrder::get_Total(){
    return total;
}
void RestaurantOrder::set_ID(int id2){
    id = id2;
}
void RestaurantOrder::set_Total(float t){
    total = t;
}

int main(){
    RestaurantOrder o1;
    o1.set_ID(1);
    cout << "Order ID is "<< o1.get_ID();
    return 0;
}