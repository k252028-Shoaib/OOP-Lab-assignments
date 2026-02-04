#include <iostream>

using namespace std;
 
int summ(int *array){
    int sum = 0;
    for (int i = 0; i < 3; i++){
        sum += array[i];
    }
    return sum;
}

int main (){
    int **arr = new int*[3];
    for (int i = 0; i < 3; i++){
        arr[i] = new int[3];
        for (int j = 0; j < 3; j++){
            cout << "Enter value: ";
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++){
        cout << summ(arr[i]) << endl;
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}