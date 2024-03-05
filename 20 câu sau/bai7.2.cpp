
#include<iostream>
using namespace std;
int main(){
double a1,b1,c1,a2,b2,c2;
cin>>a1>>b1>>c1>>a2>>b2>>c2;
    if(a1/a2==b1/b2==c1/c2) {
        cout<<"Vo so nghiem"<<endl;
        return 0;
    }
    else if((a1/a2==b1/b2)&&(b1/b2!=c1/c2)){
        cout<<"Vo nghiem"<<endl;
        return 0;
    }

    double x,y;
    x=(c1*b2-b1*c2)/(a1*b2-b1*a2);
    y=(a1*c2-c1*a2)/(a1*b2-b1*a2);
    cout<<"Co nghiem duy nhat: ("<<x<<","<<y<<")";
    return 0;
}
