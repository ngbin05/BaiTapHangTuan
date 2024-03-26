#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
map<int,int> mp;
for(int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
for(int i=0;i<=9;i++){
    cout<<i<<": "<<mp[i]<<endl;
}

}
