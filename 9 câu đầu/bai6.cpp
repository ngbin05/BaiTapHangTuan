#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int m=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j+m<=n){
            cout<<j+m<<"        ";
            }else cout<<j+m-n<<"        ";
        }

        cout<<endl;
        m++;
    }
}

