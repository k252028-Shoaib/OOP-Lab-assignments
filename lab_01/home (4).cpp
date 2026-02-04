#include <iostream>

using namespace std;
 
void swap_f(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main (){
    int a = 1, b = 2;
    cout << "Original Values: " << a << " and " << b << endl;
    swap_f(&a, &b);
    cout << "Swapped Values: " << a << " and " << b << endl;    
    return 0;
}