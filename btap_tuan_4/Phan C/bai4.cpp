#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
char a[m+2][n+2];
for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        cin>>a[i][j];
        }
    }
for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
            if(a[i][j]=='.'){
                int dem=0;
                if (a[i-1][j-1]=='*') dem++;
                if(a[i-1][j]=='*')dem++;
                if(a[i-1][j+1]=='*')dem++;
                if(a[i][j+1]=='*') dem++;
                if(a[i+1][j+1]=='*') dem++;
                if(a[i+1][j]=='*') dem++;
                if(a[i+1][j-1]=='*') dem++;
                if(a[i][j-1]=='*') dem++;
                a[i][j]=(char)(dem+48);
            }
    }
}
for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}


