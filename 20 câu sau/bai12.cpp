#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=sqrt(n);i++){
    if(i*i==n){
        cout<<"yes";
        return 0;
    }
}
cout<<"no";
}
