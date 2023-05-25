#include <iostream>
using namespace std;
int main()
{
    //#7 ----------------------
    /*float num;
    float Result;

    cout << "Please enter number\n";
    cin >> num; cout << "\n\n";
    Result = num / 2;
    cout << "Half of (" << num << ") is: " << Result;*/

    //#9 ----------------------

    /*float num1, num2, num3;
    float Result;

    cout << "Please enter number1:\n";
    cin >> num1; cout << "\n";
    cout << "Please enter number2:\n";
    cin >> num2; cout << "\n";
    cout << "Please enter number3:\n";
    cin >> num3; cout << "\n";
    
    Result = num1 + num2 + num3;

    cout << "Result of summation is: " <<"\a" << Result;*/
    
    //#10 ----------------------
    
    /*float mark1, mark2, mark3;
    float Result;

    cout << "Please enter mark1:\n";
    cin >> mark1; cout << "\n";
    cout << "Please enter mark2:\n";
    cin >> mark2; cout << "\n";
    cout << "Please enter mark3:\n";
    cin >> mark3; cout << "\n";

    Result = (mark1 + mark2 + mark3)/3;

    cout << "Result of summation is: " << Result;*/


    //#14 ----------------------
    
    /*int N1, N2;
    int swaper;

    cout << "Please enter number1:\n";
    cin >> N1; cout << "\n";
    cout << "Please enter number2:\n";
    cin >> N2; cout << "\n";
    
    cout << "==========================\n";
    cout << N1 << "\n";
    cout << N2 << "\n\n";
    cout << "==========================\n";
    
    swaper = N1;
    N1 = N2;
    N2 = swaper;

    cout << N1 << endl;
    cout << N2 << endl << endl;
    cout << "==========================\n\n";*/


    //#15 ----------------------

    /*float width, hight;
    float Area;

    cout << "Please enter hight:\n";
    cin >> hight; cout << "\n";
    cout << "Please enter width:\n";
    cin >> width; cout << "\n";

    Area = hight * width;

    cout << "Area = " << Area;*/
    
    //#17 ----------------------
    
    /*float Base, hight;
    float Area;

    cout << "Please enter hight:\n";
    cin >> hight; cout << "\n";
    cout << "Please enter base:\n";
    cin >> Base; cout << "\n";

    Area = (hight * Base)/2;

    cout << "Area = " << Area;*/


    //#19 + #20 ----------------------
    
    /*float D;
    float Area;
    const float PI = 3.14;

    cout << "Please enter D:\n";
    cin >> D; cout << "\n";

    Area = (PI * (D * D)) / 4;

    cout << "Area = " << Area;*/


    //#21 ----------------------
    
    /*float l;
    float Area;
    const float PI = 3.14;

    cout << "Please enter l:\n";
    cin >> l; cout << "\n";

    Area = (l * l)/(4 * PI);

    cout << "Area = " << Area;*/



    //#22----------------------
    
    /*float a, b;
    float Area;
    const float PI = 3.14;

    cout << "Please enter a:\n";
    cin >> a; cout << "\n";
    cout << "Please enter b:\n";
    cin >> b; cout << "\n";

    Area = (PI * b * b / 4 ) * ((2 * a - b)/(2 * a + b));

    cout << "Area = " << Area;*/

    //#23 ----------------------
    
    /*float a, b, c, p;
    float Area1;
    float Area;
    const float PI = 3.14;

    cout << "Please enter a:\n";
    cin >> a; cout << "\n";
    cout << "Please enter b:\n";
    cin >> b; cout << "\n";
    cout << "Please enter c:\n";
    cin >> c; cout << "\n";
    
    p = (a + b + c) / 2;
    Area1 =(a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    Area =PI * Area1 * Area1;

    cout << "Area = " << Area << endl;*/

    //#31----------------------
    
    /*float N;

    cout << "Please enter namber:\n";
    cin >> N; cout << "\n";
    float a = N * N;
    float b = N * N * N;
    float c = N * N * N * N;
    cout << "N ^ 2 = " << a << endl;
    cout << "N ^ 3 = " << b << endl;
    cout << "N ^ 4 = " << c << endl;*/

    //#35 ----------------------
    
    /*float TotalPennies;
    float TotalDollors;
    float penny;
    float nickel;
    float dime;
    float quarter;
    float dollor;

    cout << "Please enter penny:\n";
    cin >> penny; cout << "\n";
    cout << "Please enter nickel:\n";
    cin >> nickel; cout << "\n";
    cout << "Please enter dime:\n";
    cin >> dime; cout << "\n";
    cout << "Please enter quarter:\n";
    cin >> quarter; cout << "\n";
    cout << "Please enter dollor:\n";
    cin >> dollor; cout << "\n";
    
    TotalPennies = penny + 5 * nickel + 10 * dime + 25 * quarter + 100 * dollor;
    TotalDollors = TotalPennies / 100;

    cout << TotalPennies << "Pennies\n";
    cout << TotalDollors << "dollor" << endl;*/


    //#39 ----------------------
    
    /*float TotlaBill;
    float CashPaid;
    float Reminder;

    cout << "Please enter total bill:\n";
    cin >> TotlaBill; cout << "\n";
    cout << "Please enter cash paid:\n";
    cin >> CashPaid; cout << "\n";

    Reminder = CashPaid - TotlaBill;

    cout << Reminder << " Dollors\n";*/
    
    
    //#40----------------------

    /*float billvalue;
    float withfee;
    float totalbill;

    cout << "Please enter total bill value:\n";
    cin >> billvalue; cout << "\n";

    withfee = billvalue * 1.1;
    totalbill = withfee * 1.16;

    cout << totalbill << " Dollor";*/
    
    //#42 ----------------------
    
    /*float days;
    float hours;
    float minutes;
    float seconds;
    float Totalsecond;

    cout << "Please enter day:\n";
    cin >> days; cout << "\n";
    cout << "Please enter hours:\n";
    cin >> hours; cout << "\n";
    cout << "Please enter minutes:\n";
    cin >> minutes; cout << "\n";
    cout << "Please enter seconds:\n";
    cin >> seconds; cout << "\n";

    Totalsecond = seconds + (minutes * 60) + (hours * 3600) + (days * 3600 * 24);

    cout << Totalsecond << " Seconds\n";*/


    //#43----------------------
    
    /*int days;
    int hours;
    int minutes;
    int seconds;
    int Totalsecond;
    int reminder;
    int SeconPerDay = 3600 * 24;
    int secondPerHour = 3600;
    int SecondPerMinute = 60;

    cout << "Please enter total seconds:\n";
    cin >> Totalsecond; cout << "\n";
    
    days = floor(Totalsecond / SeconPerDay);
    reminder = Totalsecond % SeconPerDay;
    hours = floor(reminder / secondPerHour);
    reminder = reminder % secondPerHour;
    minutes = floor(reminder / SecondPerMinute);
    seconds = reminder % SecondPerMinute;

    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;*/




    //#47 ----------------------
    /*float LoanAmount;
    float MonPaymet;
    int Mon;
    cout << "Please enter loan amount:";
    cin >> LoanAmount; cout << endl;
    cout << "Please enter monthly payment:";
    cin >> MonPaymet; cout << endl;


    Mon = LoanAmount / MonPaymet;

    cout << Mon << " Months.";*/
    
    //#48 ----------------------
    
    /*float LoanAmount;
    float MonPaymet;
    int Mon;
    cout << "Please enter loan amount: ";
    cin >> LoanAmount; cout << endl;
    cout << "Please enter number of month you need: ";
    cin >> Mon; cout << endl;


    MonPaymet = LoanAmount / Mon;

    cout << MonPaymet << "\n";*/


    return 0;
}