#include <iostream>
using namespace std;

class BMI_Checker
{
public:
    double w, h, bmi;
    double calculate_BMI()
    {
        bmi = w / (h * h) * 703;
        return bmi;
    }
    string check_status()
    {
        string status;
        if (bmi < 18.5)
            status = "underweight";
        else if (bmi < 25.0)
            status = "normal";
        else
            status = "overweight";
        return status;
    }
};

int main()
{
    BMI_Checker a;
    cout << "Enter weight in pounds: ";
    cin >> a.w;
    cout << "Enter height in inches: ";
    cin >> a.h;
    cout << "Your bmi is " << a.calculate_BMI() << ".\n";
    cout << "Your status is " << a.check_status() << endl;
    return 0;
}