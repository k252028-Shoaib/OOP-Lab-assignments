#include <iostream>

using namespace std;
 
int main (){
    int *ptr = new int;
    *ptr = 1;
    ptr = NULL;
    //now the allocated address is lost and the memory is still marked as "in use"

    //correct way:
    ptr = new int;
    *ptr = 1;
    delete ptr; 
    //now the memory allocated is free and available for other use
    return 0;
}