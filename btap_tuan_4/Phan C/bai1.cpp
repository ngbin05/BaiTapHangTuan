#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    b[a[i]]++;
}
for(int i=0;i<n;i++){
    if(b[a[i]]>1){
        cout<<"YES";
        return 0;
    }
}
return 0;
}
