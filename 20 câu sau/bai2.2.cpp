#include<iostream>
#include<cmath>
using namespace std;
int main(){
//Nhập vào một số thực x và một số nguyên y. Tính x mũ y rồi cho hiển thị lên màn hình.
//Kiểm tra lại kết quả bằng hàm pow (x , y).
double x;
int y;
cin>>x>>y;
double result=1;
for(int i = 0;i < y; ++i){
    result *= x;
}
if(result=pow(2,3)) cout<<"true";
else cout<<"false";

}

