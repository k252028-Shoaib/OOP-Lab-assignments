#include <iostream>
using namespace std;

class SmartWatch{
    private:
        int time;//stored in hours
        int battery;//76% is store as 76
        int step_count;
    public:
        int get_time(){
            return time;
        }
        int get_battery(){
            return battery;
        }
        int get_step_count(){
            return step_count;
        }
        void set_time(int t){
            if (t>24 || t<0){
                cout << "Invalid time" << endl;
                return;
            }
            time = t;
        }
        void set_battery(int b){
            if (b>100 || b<0){
                cout << "Invalid battery level" << endl;
                return;
            }
            battery = b;
        }
        void set_step_count(int s){
            if (s>1000000 || s<0){
                cout << "Invalid step count" << endl;
                return;
            }
            step_count = s;
        }
};

int main(){
    SmartWatch s1;
    s1.set_battery(1000);
    s1.set_battery(100);
    cout << "Battery level is " << s1.get_battery();
    return 0;
}