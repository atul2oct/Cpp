// 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
// iterative
int maxProfitIterative(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;

        for(int i=0;i<prices.size();i++){
            if(prices[i] < minPrice) minPrice=prices[i];
            int todayProfit=prices[i] - minPrice;
            if(todayProfit > maxProfit) maxProfit=todayProfit;
        }  
        return maxProfit;      
}

void findMaxProfit(vector<int>& prices,int day,int& minPrice,int& maxProfit) {
        // base case
    if(day == prices.size()){
        return;
     }
        // 1 case solve
    if(prices[day] < minPrice) minPrice = prices[day];
    int todayProfit=prices[day] - minPrice;
    if(todayProfit > maxProfit) maxProfit = todayProfit;

    // RE Calls
    findMaxProfit(prices,day+1,minPrice,maxProfit);
}
int maxProfit(vector<int>& prices) {
    int minPrice=INT_MAX;
    int maxProfit=INT_MIN;
    findMaxProfit(prices,0,minPrice,maxProfit);   
    return maxProfit;     
}

int main(){   
    // vector<int> arr{7,1,5,3,6,4};//ans 5
    vector<int> arr{7,6,4,3,1};//ans 0
    cout<<maxProfit(arr);
    return 0;
}