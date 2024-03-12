#include<iostream>
using namespace std;
//Giá trị trả về. Viết một hàm mid_point() nhận 02 tham số kiểu Point và trả về một cấu trúc
//Point là trung điểm của đoạn thẳng nối hai điểm đó. Hãy sử dụng const để đảm bảo hàm mid_point
//không sửa giá trị của hai điểm được truyền vào.

struct Point{
int x,y;
friend ostream& operator<<(ostream &output,Point point){
output<<"("<<point.x<<","<<point.y<<")";
return output;
}
};

Point mid_Point(const Point point1,const Point point2){
Point midPoint;
    midPoint.x = (point1.x + point2.x)/2;
    midPoint.y = (point1.y + point2.y)/2;
    return midPoint;
}


int main(){
    Point point1,point2;
    cin>>point1.x>>point1.y;
    cin>>point2.x>>point2.y;
    cout<<mid_Point(point1,point2);

}
