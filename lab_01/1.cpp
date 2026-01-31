#include <iostream>

using namespace std;

int main (){
    int *pointer = new int;
    *pointer = 10;
    cout << *pointer;
    delete pointer;
    return 0;
}