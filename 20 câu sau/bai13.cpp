#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {
  if(n<=1){
    return false;
  }
  for(int i=2;i*i<=n;i++) {
    if (n%i==0) {
      return false;
    }
  }
  return true;
}

bool isPerfect(int n) {
  int sum=1;
  for (int i=2;i*i<=n;i++) {
    if (n%i==0) {
      sum+=i+n/i;
    }
  }
  return sum==n;
}

int main() {
  int n;
  cin>>n;
  cout<<"So nguyen to: ";
  for (int i=2;i<=n;i++){
    if (isPrime(i)){
      cout <<i<<" ";
    }
  }
  cout<<endl;
  cout<< "So hoan hao: ";
  for (int i=2;i<=n;i++) {
    if (isPerfect(i)){
      cout <<i<<" ";
    }
  }
  cout<<endl<<"So chinh phuong: ";
  for (int i=1;i*i<=n;i++){
    cout<<i*i<<" ";
  }
  return 0;
}
