#include<iostream>
using namespace std;
int getSum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        //sum=sum+i
        sum+=i;
    }
    return sum;
}
int getEvenSum(int num){
    int sum=0;
    for(int i=2;i<=num;i+=2){
        //sum=sum+i
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter no."<<endl;
    cin>>n;
    int ans=getSum(n);
    cout<<"Sum: "<<ans<<endl;
    ans=getEvenSum(n);
    cout<<"Even Sum: "<<ans;
    return 0;
}