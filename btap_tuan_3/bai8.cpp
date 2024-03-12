/*Cấu trúc bộ nhớ của struct;
Với cấu trúc Point đã định nghĩa ở trên.
Hãy dùng phương pháp in địa chỉ của biến để thử nghiệm tìm hiểu vị trí tương đối giữa các
trường x, y của một biến kiểu Point và chính biến đó. Bạn có nhận xét gì?*/
#include<iostream>
using namespace std;

struct Point{
int x,y;
Point(int _x,int _y){
x=(_x);
y=(_y);
}
void printAddress(){
cout<<"x: "<<&x<<endl;cout<<"y: "<<&y<<endl;
}
};



int main(){
    Point point(1,2);
    point.printAddress();
    cout<<&point<<endl;

}
/*Địa chỉ của biến point bằng địa chỉ của trường x.
Địa chỉ của trường y lớn hơn địa chỉ của trường x một lượng bằng kích thước của kiểu dữ liệu int.
->Trường x nằm ở vị trí đầu tiên trong vùng nhớ của biến Point.
->Trường y nằm ở vị trí sau trường x trong vùng nhớ của biến Point.*/
