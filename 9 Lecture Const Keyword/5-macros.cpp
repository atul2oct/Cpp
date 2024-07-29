#include<iostream>
using namespace std;

#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)
float circleArea(float r){
    return PI * r* r;
}
void func(){
    int x = 10;
    int y = 2;
    int c = MAXX(x, y);
    cout<<c<<endl;
}
int main(){
    cout<<circleArea(65.4)<<endl;
    func();
    return 0;
}