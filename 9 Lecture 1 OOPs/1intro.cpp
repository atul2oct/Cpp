#include<iostream>
using namespace std;

class Animal1{};
class Animal2{
    int age;
};
class Animal3{
    int age;
    int weight;
};
class Animal4{
    int age;
    int weight;
    char ch;
};
int main(){
    cout<<"Size of Empty Class is : "<<sizeof(Animal1)<<endl;
    cout<<"Size of Empty Class is : "<<sizeof(Animal2)<<endl;
    cout<<"Size of Empty Class is : "<<sizeof(Animal3)<<endl;
    cout<<"Size of Empty Class is : "<<sizeof(Animal4)<<endl;//why 12 not 9 why->padding and greedy alignment
    return 0;
}