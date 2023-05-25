#include <iostream>
#include <string>
using namespace std;

int main()
{
    string FullName, st2, st3;
    int Result;

    cout << "Please Enter String1?\n";
    getline(cin, FullName); cout << endl;

    cout << "Please Enter String2?\n";
    cin >> st2; cout << endl;

    cout << "please Enter String3?\n";
    cin >> st3;
    
    cout << "***************************\n";
    
    cout << "The Link of String1 is " << FullName.length() << endl;
    cout << "Caracters at 0,2,4,7 are: " << FullName[0] << " " << FullName[2] << " " << FullName[4] << " " << FullName[7] << endl;
    cout << "Concatenating String2 and String3 = " << st2 + st3 << endl;
    
    Result = stoi(st2) * stoi(st3);
    cout << st2 << " * " << st3 << " = " << Result;

    return 0;

}