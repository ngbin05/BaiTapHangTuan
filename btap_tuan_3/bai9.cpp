/*Địa chỉ tham biến, tham trị.
Viết chương trình thử nghiệm truyền tham số kiểu Point vào hàm theo hai kiểu truyền tham trị và truyền tham biến.
 Hãy dùng phương pháp in địa chỉ của biến kiểu Point để chứng tỏ rằng khi truyền tham trị ta có tham số là
 một bản sao của đối số (khác địa chỉ), còn khi truyền tham chiếu, ta có tham số và đối số chính là một biến
  (trùng địa chỉ).*/

#include<iostream>
using namespace std;
struct Point{
    int x,y;
    Point(int _x,int _y){
    x=_x;
    y=_y;
    }

};
void thamTri(Point point){
cout<<"x tham tri: "<<&point.x<<endl;
cout<<"y tham tri: "<<&point.y<<endl;
}


void thamSo(Point &point){
cout<<"x tham so: "<<&point.x<<endl;
cout<<"y tham so: "<<&point.y<<endl;
}
int main(){
Point point(1,1);
cout<<"x: "<<&point.x<<"  "<<"y: "<<&point.y<<endl;
thamTri(point);
thamSo(point);

}
