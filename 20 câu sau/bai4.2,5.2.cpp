//Bài 4. Nhập hai số nguyên dương x, y. In bội số chung nhỏ nhất.
//Bài 5. Nhập hai số nguyên dương x, y. In ước số chung lớn nhất.
#include<iostream>
using namespace std;

int ucln(int a,int b){
if(a==b) return a;
if(a>b) return ucln(a-b,b);
if(a<b) return ucln(a,b-a);
}
int main(){
int x,y;
cin>>x>>y;
cout<<"Uoc chung lon nhat la: "<<ucln(x,y)<<endl;
cout<<"Boi chung nho nhat la: "<<(x*y)/ucln(x,y);
return 0;
}
