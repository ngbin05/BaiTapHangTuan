#include<iostream>
using namespace std;
/*Ship. Viết một struct Ship là kiểu dữ liệu đại diện cho một con tầu (ship).
Mỗi ship có một biến thành viên là một Rect để ghi tọa độ và kích thước của tầu,
một biến thành viên id kiểu string là số hiệu của tầu.
Ngoài ra còn có thêm dx và dy là vận tốc hiện hành của tầu theo trục x và trục y.
Viết hàm move() của Ship với nhiệm vụ thay đổi vị trí của tầu theo vận tốc hiện hành (x += dx, y+= dy).
Viết hàm display(const Ship& ship) là hàm độc lập bên ngoài với nhiệm vụ hiển thị số hiệu và tọa độ của tầu.*/

struct Point{
int x,y;
};
struct Rect{
    int x;
    int y;
    int w;
    int h;

    Rect(int _x,int _y,int _w, int _h){
    x=_x;
    y=_y;
    w=_w;
    h=_h;
    }
    Rect(){};

bool contain(const Point point) const{
    if((point.x>=x&&point.x<=x+w)&&(point.y>=y&&point.y<=y+h)) return true;
    return false;
}
};
struct Ship{
Rect rect;
string id;
int dx,dy;

Ship(Rect _rect,string _id,int vx,int vy){
rect=_rect;
id=_id;
dx=vx;
dy=vy;
}


void movee(){
rect.x+=dx;
rect.y+=dy;
}
};

void display(const Ship& ship){
cout<<ship.id<<endl;
cout<<ship.rect.x<<","<<ship.rect.y;
}
int main(){
Rect rect(0,0,100,50);
Ship ship(rect,"123abc456",500,500);
ship.movee();
display(ship);

}
