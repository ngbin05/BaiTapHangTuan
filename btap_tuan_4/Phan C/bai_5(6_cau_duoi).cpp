#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct Diemso{
double toan,ly,anh;
double diemTb;
Diemso(double _toan=0, double _ly=0, double _anh=0){
diemTb=(_toan+_ly+_anh)/3;
}

friend ostream& operator<<(ostream& out,Diemso &diem){
out<<fixed<<setprecision(1)<<diem.toan<<"  "<<diem.ly<<"   "<<diem.anh<<endl;
return out;
}
friend istream & operator>>(istream& in, Diemso &diem){
    in>>diem.toan>>diem.ly>>diem.anh;
    return in;
}


};
double diemTB(Diemso a){
a.diemTb=(a.toan+a.ly+a.anh)/3;
return a.diemTb;
}
void tinhtheoToan(vector<Diemso> a){
int n=a.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i].toan<a[j].toan){
            swap(a[i],a[j]);
        }
    }
}
cout<<"Theo diem mon Toan: "<<endl;
for(int i=0;i<n;i++){
    cout<<"Sinh vien"<<i+1<<": "<<fixed<<setprecision(1)<<a[i].toan<<"     "<<a[i].ly<<"    "<<a[i].anh<<endl;
}
}
void tinhtheoLy(vector<Diemso> a){
int n=a.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i].ly<a[j].ly){
            swap(a[i],a[j]);
        }
    }
}
cout<<"Theo diem mon Ly: "<<endl;
for(int i=0;i<n;i++){
    cout<<"Sinh vien"<<i+1<<": "<<fixed<<setprecision(1)<<a[i].toan<<"     "<<a[i].ly<<"    "<<a[i].anh<<endl;
}
}
void tinhtheoDtb(vector<Diemso> a){
int n=a.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(diemTB(a[i])<diemTB(a[j])){
            swap(a[i],a[j]);
        }
    }
}
cout<<"Theo diem trung binh: "<<endl;
for(int i=0;i<n;i++){
    cout<<"Sinh vien"<<i+1<<": "<<fixed<<setprecision(1)<<a[i].toan<<"     "<<a[i].ly<<"    "<<a[i].anh<<endl;
}
}

int main(){
    Diemso sv1,sv2,sv3;
    cin>>sv1>>sv2>>sv3;
    vector<Diemso> danhsach{sv1,sv2,sv3};
    cout<<"            Toan"<<"      Ly"<<"      Anh"<<endl;
tinhtheoToan(danhsach);



}
