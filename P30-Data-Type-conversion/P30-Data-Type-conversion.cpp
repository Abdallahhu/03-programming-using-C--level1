#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1 = "43.22";
    string st2, st3, st4;
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;
    int N3_int_1, N3_int_2, N3_int_3;
    
    int num_int = stoi(st1);
    float num_Float = stof(st1);
    double num_Double = stod(st1);

    st2 = to_string(N1);
    st3 = to_string(N2);
    
    st4 = to_string(N3);
    N3_int_1 = N3;
    N3_int_2 = (int) N3;
    N3_int_3 = int(N3);


    cout << "int= " << num_int << endl;
    cout << "float= " << num_Float << endl;
    cout << "Double= " << num_Double << endl << endl;
    
    cout << st2 << "\n";
    cout << st3 << "\n\n";

    cout << st4 << "\n";
    cout << N3_int_1 << "\n";
    cout << N3_int_2 << "\n";
    cout << N3_int_3 << "\n\n";


    return 0;

}
