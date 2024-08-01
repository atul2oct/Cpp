#include <iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)){}

    // default dumb copy constructor: it does SHALLOW COPY
    abc(const abc &obj){
        x = obj.x;
        y = obj.y;
    }

    void print(){
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x, y, *y);
    }
};

int main(){
    abc a(1,2);
    a.print();

    // shallow copy by default call hota hai COPY CONSTRUCTOR
    abc b = a;
    b.print();

    *b.y = 20;
    // after i update obj b's y then both and obj a and b y's are updateed due to shollow copy of pointer y which is shared by both object
    a.print();
    b.print();
    return 0;    
}
