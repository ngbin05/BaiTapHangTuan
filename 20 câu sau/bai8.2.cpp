#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a!=0){
    double delta=b*b-4*a*c;
    if(delta<0){
        cout<<"Phuong trinh vo nghiem";
        return 0;
    }
    if(delta==0){
        cout<<"Phuong trinh co nghiem kep: "<<-b/(2*a);
        return 0;
    }
    if(delta>0){
        double x1=(-b+sqrt(delta))/(2*a);
        double x2=(-b-sqrt(delta))/(2*a);
        cout<<"Phuong trinh co 2 nghiem phan biet: x1 = "<<x1<<", x2 = "<<x2;
    }
    } else cout<<"Phuong trinh co nghiem la: "<<"x = "<<-c/b;

}
