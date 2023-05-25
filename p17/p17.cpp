#include <iostream>
using namespace std;

int main()
{
    int age = 24, MonSalary = 5000;
    string EmpName = "Abdallah Hussein", City = "Damascuse", country = "Syria";
    char Gender = 'M';
    bool married = 1;

    cout << "*****************************\n";
    
    cout << "Name: " << EmpName << ".\n";
    cout << "Age: " << age << "Years.\n";
    cout << "City: " << City << ".\n";
    cout << "County: " << country << ".\n";
    cout << "Monthly Salary: " << MonSalary << endl;
    cout << "Yearly Salary: " << MonSalary * 12 << "\n";
    cout << "Gender: " << Gender <<"\n";
    cout << "Maried: " << married << endl;

    cout << "*****************************";
    
    return 0;
}

