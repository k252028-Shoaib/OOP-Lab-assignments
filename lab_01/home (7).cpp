#include <iostream>

using namespace std;
 
int sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main (){
    int size = 10;
    int *arr = new int[size]{14, 57, 3, 82, 41, 99, 26, 68, 75, 10};
    cout << sum(arr, size);

    delete[] arr;
    return 0;
}