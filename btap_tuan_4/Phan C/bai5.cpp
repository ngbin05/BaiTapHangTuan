#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x,y;
    int num=1;
    cin>>x>>y;
    int a[x][y];
    int tp=0,bt=x-1,lf=0,rgt=y-1;
    while(tp<=bt&&lf<=rgt){
        for(int i=lf;i<rgt;i++){
            a[tp][i]=num;
            num++;
        }
        for(int i=tp;i<=bt;i++){
            a[i][rgt]=num;
            num++;
        }
        for(int i=rgt-1;i>=lf;i--){
            a[bt][i]=num;
            num++;
        }
        for(int i=bt-1;i>tp;i--){
            a[i][lf]=num;
            num++;
        }
        tp++;
        bt--;
        lf++;
        rgt--;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<left<<setw(3)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
