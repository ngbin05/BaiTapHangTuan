#include<iostream>
using namespace std;
/*Rect. Viết một struct Rect là kiểu dữ liệu đại diện cho hình chữ nhật.
Rect có bốn thành viên dữ liệu x, y là tọa độ góc trên trái, w và h là chiều rộng, chiều cao của hình.
Rect có hàm contains() nhận 01 tham số kiểu Point và trả về giá trị kiểu bool là true nếu point được
cho nằm bên trong hình (tính cả viền), false nếu ngược lại. Hãy sử dụng const để đảm bảo hàm contains
không sửa giá trị của điểm được truyền vào, và để các hàm này dùng được cho các hằng kiểu Rect.*/

struct Point{
int x,y;
};
struct Rect{
    int x;
    int y;
    int w;
    int h;

bool contain(const Point point) const{
    if((point.x>=x&&point.x<=x+w)&&(point.y>=y&&point.y<=y+h)) return true;
    return false;
}
};
int main(){
Point point{3,4};
const Rect rect{1,1,3,4};
cout<<boolalpha<<rect.contain(point);

}


