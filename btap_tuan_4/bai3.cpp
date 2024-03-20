#include<iostream>
using namespace std;

bool check(int n){
    int res=0,num=n;
    while (n>0){
        int tmp=n%10;
        n/=10;
        res=res*10+tmp;
        }
    if(res==num) return true;
    else return false;
}


int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
int A,B,dem=0;
cin>>A>>B;
for(int i=A;i<=B;i++){
    if(check(i)==1){

        dem++;
    }
}
cout<<dem<<endl;
    }
return 0;

}
