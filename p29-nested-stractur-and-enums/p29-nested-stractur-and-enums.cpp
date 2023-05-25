#include <iostream>
using namespace std;
enum enColor { Red, Gree, Yellow, Blue };
enum enGendor { Male, female };
enum enMaritalStatus { Single, married };

struct stAddress
{
    string city;
    string country;
    string zipcode;
};

struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};

struct stPerson
{
    string Name;
    short int age;
    float MonllySalary;
    float YearllySalary;
    stContactInfo ContactInfo;
    enColor Color;
    enGendor Gendor;
    enMaritalStatus MaritalStatus;
};
int main()
{
    stPerson Person1;

    Person1.Name = "Abdallah Hussein";
    Person1.age = 24;
    Person1.ContactInfo.Address.city = "Damascus";
    Person1.ContactInfo.Address.country = "Syria";
    Person1.ContactInfo.Phone = "0993995771";
    Person1.ContactInfo.Email = "Abdalla.a99h@gmail.com";
    Person1.ContactInfo.Address.zipcode = "77777";
    Person1.MonllySalary = 750000;
    Person1.YearllySalary = Person1.MonllySalary * 12;
    Person1.Gendor = enGendor::Male;
    Person1.MaritalStatus = enMaritalStatus::Single;
    Person1.Color = enColor::Blue;

    cout << "*****************************\n";

    cout << "Name: " << Person1.Name << "." << endl;
    cout << "Age: " << Person1.age << " Years." << endl;
    cout << "City: " << Person1.ContactInfo.Address.city << "." << endl;
    cout << "Country: " << Person1.ContactInfo.Address.country << "." << endl;
    cout << "Phone: " << Person1.ContactInfo.Phone << endl;
    cout << "Email: " << Person1.ContactInfo.Email << endl;
    cout << "Zip Code: " << Person1.ContactInfo.Address.zipcode << endl;
    cout << "Monthly Salary: " << Person1.MonllySalary << endl;
    cout << "Yearly Salary: " << Person1.YearllySalary << endl;
    cout << "Gender: " << Person1.Gendor << endl;
    cout << "Maried: " << Person1.MaritalStatus << endl;
    cout << "Color: " << Person1.Color << endl;

    cout << "*****************************";

    return 0;
}

