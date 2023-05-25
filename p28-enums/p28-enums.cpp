#include <iostream>
using namespace std;

enum Gender { Male = 1, Femail = 0 };
enum Status { single, Married };
enum Color { Red, Blue, Green };
int main()
{
    string EmpName;
    int age;
    string city;
    string country;
    float MonSalary;
    Gender MyGender;
    Status IsMarried;
    Color mycolor;

    EmpName = "Abdallah Hussien";
    age = 24;
    city = "Damascus";
    country = "Syria";
    MonSalary = 750000;
    MyGender = Gender::Male;
    IsMarried = Status::single;
    mycolor = Color::Blue;

    cout << "*****************************\n";

    cout << "Name: " << EmpName << "." << endl;
    cout << "Age: " << age << " Years." << endl;
    cout << "City: " << city << "." << endl;
    cout << "Country: " << country << "." << endl;
    cout << "Monthly Salary: " << MonSalary << endl;
    cout << "Yearly Salary: " << MonSalary * 12 << endl;
    cout << "Gender: " << MyGender << endl;
    cout << "Maried: " << IsMarried << endl;
    cout << "Colors is: " << mycolor << endl;
    cout << "*****************************";

    return 0;
}

