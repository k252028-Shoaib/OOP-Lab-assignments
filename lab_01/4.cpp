#include <iostream>

using namespace std;
 
typedef struct student{
    int id;
    string name;
    string department;
}student;

int main (){
    student arr[3];
    for (int i = 0; i < 3; i++){
        cout << "Enter data for student " << i+1 << ": (id then first name then department)\n";
        cin >> arr[i].id >> arr[i].name >> arr[i].department;
    }
    for (int i = 0; i < 3; i++){
        cout << "\nStudent " << i+1 << ": \n";
        cout << "id: " << arr[i].id << ", name: " << arr[i].name << ", department: " << arr[i].department;
    }
    return 0;
}