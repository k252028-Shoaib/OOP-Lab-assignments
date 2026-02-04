#include <iostream>

using namespace std;
 
int main (){
    int *arr = new int[10]{1,54,8,10,5,3,78,3,1,2}; //array of size 5
    int highest = 0; //assuming index 0 has the highest value 
    for (int i = 1; i < 10; i++){
        if (arr[highest] < arr[i]) highest = i;
    }
    cout << "Highest value is " << arr[highest] << " at index " << highest;

    delete[] arr;
    return 0;
}