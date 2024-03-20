#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int Max=a[1],Min=a[1],odd=0,even=0;
for(int x:a){
    Max=max(Max,x);
    Min=min(Min,x);
    if(x%2==1) odd++;
    else even+=x;
}
cout<<"Max: "<<Max<<endl;
cout<<"Min: "<<Min<<endl;
cout<<"So phan tu le: "<<odd<<endl;
cout<<"Tong phan tu chan: "<<even<<endl;
return 0;
}
