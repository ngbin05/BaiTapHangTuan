#include<iostream>
using namespace std;
int main(){
int Min=0,Max=300,Step=20;
 cout << "Fahrenheit" << "\t" << "Celsius" << "\t\t" << "Absolute Value" << endl;
for(int i=Min;i<=Max;i+=20){
    int  f=i;
    double c = ( f - 32 )* 5/9.0;
    double k = c + 273.15;

    cout << f << "\t\t" << c << "\t\t " << k << endl;
}

}
