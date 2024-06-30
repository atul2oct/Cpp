#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n == 1){
        return 1;
    }

    int smallerProblem=factorial(n-1);

    int biggerProblem=n * smallerProblem;

    return biggerProblem;

}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;

    int ans=factorial(n);
    cout<<"Factorial of "<<n<<" is : "<<ans<<endl;
}