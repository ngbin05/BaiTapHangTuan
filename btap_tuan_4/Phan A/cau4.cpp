#include<iostream>
using namespace std;
int main(){
char a[]={"abcd"};
cout<<a[-1]<<endl;//van chay duoc nhung in ra ki tu la?
int b[3][4]={{0,1,2,3},{0,1,2,3},{0,1,2,3}};
for(int i=0;i<3;i++){
       for(int j=0;j<5;j++){//chay den 5 thi gia tri b[i][5] se la 1 so ngau nhien
        cout<<b[i][j];
       }
       cout<<endl;
}
}
