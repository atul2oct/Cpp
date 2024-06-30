#include<iostream>
#include<limits.h>
using namespace std;


int cutSegments(int n,int x,int y,int z){
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }

    int ans1=cutSegments(n-x,x,y,z) + 1;

    int ans2=cutSegments(n-y,x,y,z) + 1;

    int ans3=cutSegments(n-z,x,y,z) + 1;

    int ans=max(ans1,max(ans2,ans3));

    return ans;
}
// 2nd nhi chal rha
int cutSegments2(int n,int x,int y,int z){
    if(n == 0){
        return 0;
    }
    int a=0;
    if(n - x >= 0){
        a=cutSegments(n-x,x,y,z) + 1;
    }

    int b=0;
    if(n - y >= 0){
        b=cutSegments(n-y,x,y,z) + 1;
    }

    int c=0;
    if(n - z >= 0){
        c=cutSegments(n-z,x,y,z) + 1;
    }

    int ans=max(a,max(b,c));
    return ans;
}

int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;

    int ans=cutSegments(n,x,y,z);
    if(ans < 0)
        ans=0;
    cout<<"Max no of segments are: "<<ans<<endl;
    return 0;
}