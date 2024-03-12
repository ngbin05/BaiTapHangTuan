/*Phép gán và copy nông. Bạn đã biết rằng với phép gán, C++ chỉ sao chép nông,
có nghĩa là nếu một trường của biến struct là con trỏ thì trường tương ứng của
bản sao của biến struct đó là một con trỏ có giá trị giống hệt. Có nghĩa là hai biến struct đó có
con trỏ trỏ tới cùng một vùng dữ liệu. Hãy thử nghiệm để xem chuyện gì xảy ra khi biến struct được
sao chép có trường dữ liệu là mảng, là một struct khác.*/
#include<iostream>
using namespace std;
struct myStruct{
int arr[5];
};
struct myStruct1{
myStruct mstr;
    myStruct1(myStruct _mstr){
    mstr=_mstr;
    }
};
int main(){
    //TH1:
myStruct mstr1={1,2,3,4,5};
myStruct mstr2=mstr1;
cout<<"mstr1     mstr2"<<endl;
for(int i=0;i<5;i++){
    cout<<&mstr1.arr[i]<<"  "<<&mstr2.arr[i]<<endl;//-> cung 1 vung du lieu
}

//TH2:
myStruct1 mstr3(mstr1);
for(int i=0;i<5;i++){
    mstr3.mstr.arr[i]++;
    cout<< mstr3.mstr.arr[i]<<endl;
}
}//thay doi duoc tu cai trc

