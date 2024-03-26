#include<iostream>
using namespace std;

char a[4];
//char a1[3]="abcd"; khai bao lon ho kich thuoc mang
int main(){
char b[4];
for(int i=0;i<4;i++){
cout<<a[i]<<"va"<<b[i]<<endl;
}
//char b1[3]="abcd"; khai bao lon hon kich thuoc mang
char b2[]="abcd";
cout<<sizeof(b2)/sizeof(char);// kich thuoc lon hon 1 gia tri vi o cuoi mang co gia tri null.
string str=b2;
cout<<endl<<str<<endl;
cout<<str.size();// do dai ngan hon cua xau ki tu.
}
