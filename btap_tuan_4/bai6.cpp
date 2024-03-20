#include<iostream>
#include<iomanip>
using namespace std;
 int main(){
 int n;
 cin>>n;
 int a[n][n];
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=n*n+1;
    }
 }
int i=0,j=(n)/2,num=1;
int r=n*n;
int tmp1,tmp2,tmp3,tmp4;
 while(r>0){
        a[i][j]= num;
        num++;
        tmp1 = i;tmp2 = j;tmp3 = i;tmp4 = j;
    if(i-1<0) {
        tmp1 = n;
        i = n-1;
        }else i=i-1;
    if(j+1>=n){
        tmp2 = -1;
        j = 0;
        } else j = j+1;
    if(a[tmp1-1][tmp2+1] < num){
        if(tmp3+1 >= n)
        {
            i = 0;
            j = tmp4;
        }
        else {
            i = tmp3+1;
            j = tmp4;
        }

    }
   r--;
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<left<<setw(2)<<a[i][j]<<"   ";
    }
    cout<<endl;
 }
 return 0;
 }

