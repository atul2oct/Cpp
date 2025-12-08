#include<iostream>
#include<vector>
using namespace std;

int findsqrt(int n){
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(mid * mid == n){
            return mid;
        }
        if(mid * mid >= n){
            // search left
            end = mid - 1;
        }else{
            // search right
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    // integer part
    int ans = findsqrt(n);
    cout<<"Ans is: "<<ans<<endl;
    // decimal part
    int precision;
    cout<<"Enter the number of floating digit precision"<<endl;
    cin>>precision;
    double step = 0.1;
    double finalAns = ans;
    for(int i=0;i<precision;i++){
        for(double j=finalAns;j*j<=n;j+=step){
            finalAns = j;
        }
        step /= 10;
    }
    cout<<"Final ans is. "<<finalAns<<endl;
    return 0;
}