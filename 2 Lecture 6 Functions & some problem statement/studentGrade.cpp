#include<iostream>
using namespace std;
//n is parameter
// char findGrade(int n){
//     if(n>90){
//         return 'A';
//     }
//     else if(n>80 && n<90){
//         return 'B';
//     }
//     else if(n>70 && n<80){
//         return 'C';
//     }
//     else if(n>60 && n<70){
//         return 'D';
//     }
//     else if(n>50 && n<60){
//         return 'E';
//     }
//     else{
//         return 'F';
//     }
// }
// char findGrade(int n){
//     if(n>90){
//         return 'A';
//     }
//     else if(n>=80){
//         return 'B';
//     }
//     else if(n>=70){
//         return 'C';
//     }
//     else if(n>=60){
//         return 'D';
//     }
//     else if(n>=50){
//         return 'E';
//     }
//     else{
//         return 'F';
//     }
// }
char findGrade(int n){
    switch (n/10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    case 5:
        return 'E';
        break;    
    default:
        return 'F';
    }
}
int main(){
    int grade;
    cout<<"Enter the marks:";
    cin>>grade;
    //grade is argument
    char result=findGrade(grade);
    cout<<"Grade Obtain: "<<result;
    return 0;
}