#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char daytab1[2][12]{{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
char daytab2[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
cout<<daytab1;
cout<<endl;
for(int i=0;i<2;i++){
        for(int j=0;j<12;j++){
            cout<<daytab2[i][j]<<" ";
        }
        cout<<endl;
}
}
