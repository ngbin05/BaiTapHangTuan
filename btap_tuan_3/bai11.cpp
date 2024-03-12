#include<bits/stdc++.h>
using namespace std;
struct String{
int n;
char*str=new char;

String(const char* path){
    strcpy(str,path);
    n=strlen(path);
}

~String(){
delete[]str;
}

void print(){
    cout<<str<<endl;
}

void append(const char* _path){
strcat(str,_path);
}
};
int main(){
    String s("Hello");
    s.print();
    s.append("world");
    s.print();
}
