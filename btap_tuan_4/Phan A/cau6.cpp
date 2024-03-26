#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int a[30];
srand(time(NULL));
for(int i=0;i<30;i++){
    a[i]=rand()%101;
    cout<<a[i]<<" ";
}

}
