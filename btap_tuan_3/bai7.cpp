#include<iostream>
using namespace std;

//Viết một chương trình nhỏ để thử nghiệm struct Ship,
//tạo ra một số con tầu với tọa độ và tốc độ khác nhau.
//Dùng vòng lặp cho các con tầu di chuyển và hiển thị tọa độ của tầu. Ví dụ


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
cout<<"("<<ship.rect.x<<","<<ship.rect.y<<")"<<endl;
}
int main(){
Rect rect1(0,0,100,50),rect2(50,50,100,50),rect3(60,60,100,50);
Ship ship1(rect1,"123-abc",50,50),ship2(rect2,"124-abc",75,75),ship3(rect3,"125-abc",100,100);
int loop =6;
while (loop < 10) {
    ship1.movee(); ship2.movee();ship3.movee();
    cout<<"tau 1:";display(ship1);
    cout<<"tau 2:";display(ship2);
    cout<<"tau 3:";display(ship3);
    loop ++;
}
}
