#include<iostream>
using namespace std;
bool isFibo(int n){
if(n==0||n==1) return true;
int a=0,b=1;
while(b<=n){
        int tmp=a+b;
        if(tmp==n) return true;
        a=b;
        b=tmp;
    }
    return false;
}
void inRaMhinh(int n){
    int a=0,b=1;
while(b<=n){
        cout<<a<<" ";
    int tmp=a+b;
    a=b;
    b=tmp;
    }
}
int main(){
    int n;
    cin>>n;
    if(isFibo(n)) cout<<"n la so Fibo"<<endl;
    else cout<<"n khong la so Fibo"<<endl;
    inRaMhinh(n);

}
