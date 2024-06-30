#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    int a1,a2,a3,a4;
    a1=(++a)*(--b);
    a2=(++a)*(b--);
    a3=(a++)*(--b);
    a4=(a++)*(b--);
    cout<<a1<<a2<<a3<<a4;
}