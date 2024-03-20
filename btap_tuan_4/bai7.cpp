#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.length();i++) s[i]=toupper(s[i]);
cout<<s<<endl;
int row=6,cols=6;
int a[row][cols];
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        if(a[i][j]==s[1]){
            cout<<"*";
        } else cout<<" ";
    }
    cout<<endl;
}

}
