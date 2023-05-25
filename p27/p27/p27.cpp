#include <iostream>
using namespace std;

struct ContactInfo
{
    string Mob;
    string email;
};

struct MoreInfo
{
    float MonSal;
    char Gender;
    bool Ismarried;
};

struct strAddress
{
    string city;
    string country;
    ContactInfo contact;
};

struct User
{
    string name;
    short int age;
    strAddress Address;
    MoreInfo Info;
};

int main()
{
    User user1;
    User user2;

    user1.name;
    user1.age;
    user1.Address.city;
    user1.Address.country;
    user1.Info.MonSal;
    user1.Info.Gender;
    user1.Info.Ismarried;
    user1.Address.contact.Mob;
    user1.Address.contact.email;

    user2.name;
    user2.age;
    user2.Address.city;
    user2.Address.country;
    user2.Info.MonSal;
    user2.Info.Gender;
    user2.Info.Ismarried;
    user2.Address.contact.Mob;
    user2.Address.contact.email;

    cout << "Please Enter Employye1 Name:\n";
    cin >> user1.name;
    cout << "Please Enter Employye1 Age:\n";
    cin >> user1.age;
    cout << "Please Enter Employye1 City:\n";
    cin >> user1.Address.city;
    cout << "Please Enter Employye1 Country:\n";
    cin >> user1.Address.country;
    cout << "Please Enter Employye1 Mobile number\n";
    cin >> user1.Address.contact.Mob;
    cout << "Please Enter Employye1 Email\n";
    cin >> user1.Address.contact.email;
    cout << "Please Enter Employye1 Monthly Salary:\n";
    cin >> user1.Info.MonSal;
    cout << "Please Enter Employye1 Gender:\n";
    cin >> user1.Info.Gender;
    cout << "Is Married ??:\n";
    cin >> user1.Info.Ismarried;


    cout << "*****************************\n";

    cout << "Name: " << user1.name << "." << endl;
    cout << "Age: " << user1.age << " Years." << endl;
    cout << "City: " << user1.Address.city << "." << endl;
    cout << "Country: " << user1.Address.country << "." << endl;
    cout << "Mobile: " << user1.Address.contact.Mob << endl;
    cout << "Email: " << user1.Address.contact.email << endl;
    cout << "Monthly Salary: " << user1.Info.MonSal << endl;
    cout << "Yearly Salary: " << user1.Info.MonSal * 12 << endl;
    cout << "Gender: " << user1.Info.Gender << endl;
    cout << "Maried: " << user1.Info.Ismarried << endl;

    cout << "*****************************\n\n";

    cout << "Pleas enter employye2 name:\n";
    cin >> user2.name;
    cout << "Pleas enter employye2 age:\n";
    cin >> user2.age;
    cout << "Pleas enter employye2 city:\n";
    cin >> user2.Address.city;
    cout << "Pleas enter employye2 country:\n";
    cin >> user2.Address.country;
    cout << "Please enter employye1 Mobile number\n";
    cin >> user2.Address.contact.Mob;
    cout << "Please employye1 email\n";
    cin >> user2.Address.contact.email;
    cout << "Pleas enter employye2 monthly salary:\n";
    cin >> user2.Info.MonSal;
    cout << "Pleas enter employye2 gender:\n";
    cin >> user2.Info.Gender;
    cout << "Is married ??:\n";
    cin >> user2.Info.Ismarried;


    cout << "*****************************\n";

    cout << "Name: " << user2.name << "." << endl;
    cout << "Age: " << user2.age << " Years." << endl;
    cout << "City: " << user2.Address.city << "." << endl;
    cout << "Country: " << user2.Address.country << "." << endl;
    cout << "Mobile: " << user1.Address.contact.Mob << endl;
    cout << "Email: " << user1.Address.contact.email << endl;
    cout << "Monthly Salary: " << user2.Info.MonSal << endl;
    cout << "Yearly Salary: " << user2.Info.MonSal * 12 << endl;
    cout << "Gender: " << user2.Info.Gender << endl;
    cout << "Maried: " << user2.Info.Ismarried << endl;

    cout << "*****************************";

    return 0;
}
