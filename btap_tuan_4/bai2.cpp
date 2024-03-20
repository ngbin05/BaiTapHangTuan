#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int len=s.size();
for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            cout<<"NO";
            return 0;
        }
}
cout<<"YES";
return 0;
}
