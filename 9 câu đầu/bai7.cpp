#include<iostream>
using namespace std;
int main(){
    int n,m=-1;
    while(true){
            cin>>n;
        if(n!=m){
            cout<<n<<" ";
            m=n;
        }else if(n<0){
            break;
        }
    }
    return 0;
}
