#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f;
    cout<<"Nhap do Fahrenheit: ";cin>>f;
    double c = ( f - 32 )* 5/9.0;
    double k = c + 273.15;
    cout << "Fahrenheit" << "\t" << "Celsius" << "\t\t" << "Absolute Value" << endl;
    cout << f << "\t\t" << c << "\t" << k << endl;

}
