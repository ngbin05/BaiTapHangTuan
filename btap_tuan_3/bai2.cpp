#include<iostream>
using namespace std;
//Tham số hàm. Viết chương trình thử nghiệm truyền tham số kiểu Point vào hàm theo hai kiểu truyền tham trị
//và truyền tham biến. Hãy dùng hàm main() để thử nghiệm sự khác nhau giữa hiệu ứng truyền tham trị
//và tham biến là struct và tham trị tham biến là thành viên của struct.
struct Point{
int x,y;
friend ostream& operator<<(ostream &output,Point point){
output<<"("<<point.x<<","<<point.y<<")";
return output;
}
};
void doublePoint(Point point){
point.x*=2;
point.y*=2;

}
void doublePointByReference(Point &point){
point.x*=2;
point.y*=2;
}

int main(){
    Point point{1,1};
    doublePoint(point);
    cout<<point<<endl;
    doublePointByReference(point);
    cout<<point;
}
