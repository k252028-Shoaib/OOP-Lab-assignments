#include <iostream>

using namespace std;
 
void insert(int array[], int *tail){
    if (*tail >= 10){
        cout << "Array is full" << endl;
        return;
    }
    
    int val;
    cout << "Please enter a value: ";
    cin >> val;
    array[*tail] = val;
    (*tail)++;
}
void display(int array[], int *tail){
    if (*tail == 0){
        cout << "Array is empty" << endl;
        return;
    }

    for (int i = 0; i < *tail; i++){
        cout << array[i] << "\n";
    }
    
}
void sum(int array[], int *tail){
    if (*tail == 0){
        cout << "Array is empty" << endl;
        return;
    }

    int sum = 0;
    for (int i = 0; i < *tail; i++){
        sum += array[i];
    }
    cout << sum << "\n";
}

int main (){
    int size = 10;
    int tail = 0; //points to the next free index of the array
    int *arr = new int[size];
    int choice;
    do
    {
        cout << "Main menu: \n1. Insert a value \n2. Display all values \n3. Sum all values \n4. Exit \nPlease enter the option number to choose from: ";
        cin >> choice;
        if (choice == 4) break;
        switch (choice){
        case 1:
            insert(arr, &tail);
            break;
        case 2:
            display(arr, &tail);
            break;
        case 3:
            sum(arr, &tail);
            break;
        default:
            break;
        }
        
        cout << "Do you want to continue? (1 if yes, 0 if no): ";
        cin >> choice;
    } while (choice);
    
    return 0;
}