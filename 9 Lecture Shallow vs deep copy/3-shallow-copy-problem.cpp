// problem in shallow copy
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
    
    ~abc(){
        delete y;
    }
};

int main(){
    abc *a = new abc(1,2);
    abc b = *a;
    a->print();
    delete a;
    b.print();

    return 0;    
}
