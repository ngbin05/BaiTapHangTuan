//Bài 6. Nhập tử số và mẫu số của một phân số, in ra phân số tối giản.

#include<iostream>
using namespace std;
int ucln(int a,int b){
if(a==b) return a;
if(a>b) return ucln(a-b,b);
if(a<b) return ucln(a,b-a);
}
void toigian(int& a,int& b){
    int n=ucln(a,b);
    a/=n;
    b/=n;
}
int main(){
int x,y;
cin>>x>>y;
toigian(x,y);
cout<<"Phan so toi gian la: "<<x<<"/"<<y<<endl;
}
