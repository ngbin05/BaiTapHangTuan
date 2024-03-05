#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
double i;
cin>>i;
double Max=i,Min=i;
while(n-1>0){
        cin>>i;
    Max=max(Max,i);
    Min=min(Min,i);
    n--;
}
cout<<Max<<endl;
cout<<Min;
}
