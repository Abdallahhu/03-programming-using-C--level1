#include <iostream>
using namespace std;

int main()
{
    string EmpName;
    int age;
    string city;
    string country;
    float MonSalary;
    char Gender;
    bool IsMarried;

    cout << "Pleas enter employye name:\n";
    cin >> EmpName;
    cout << "Pleas enter employye age:\n";
    cin >> age;
    cout << "Pleas enter employye city:\n";
    cin >> city;
    cout << "Pleas enter employye country:\n";
    cin >> country;
    cout << "Pleas enter employye monthly salary:\n";
    cin >> MonSalary;
    cout << "Pleas enter employye gender:\n";
    cin >> Gender;
    cout << "Is married ??:\n";
    cin >> IsMarried;


    cout << "*****************************\n";

    cout << "Name: " << EmpName << "." << endl;
    cout << "Age: " << age << " Years." << endl;
    cout << "City: " << city << "." << endl;
    cout << "Country: " << country << "." << endl;
    cout << "Monthly Salary: " << MonSalary << endl;
    cout << "Yearly Salary: " << MonSalary * 12 << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Maried: " << IsMarried << endl;

    cout << "*****************************";

    return 0;
}

