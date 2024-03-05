#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    while(n>0){
        int tmp=n%10;
        n/=10;
        sum+=tmp;
    }
    cout<<sum;
}
