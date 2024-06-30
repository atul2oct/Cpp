// https://leetcode.com/problems/minimum-time-difference/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <limits.h>
using namespace std;

int findMinDifference(vector <string>& timePoints ){
    // step 1 convert time string into mintues integer value
    vector<int> minutes;
    for(int i=0;i<timePoints.size();i++){
        string curr=timePoints[i];
        // stoi->convert from string to integer
        int hours=stoi(curr.substr(0,2));
        int mins=stoi(curr.substr(3,2));
        int totalMinutes=hours*60+mins;
        minutes.push_back(totalMinutes);
    }

    // step 2 sort
    sort(minutes.begin(),minutes.end());

    // step 3 difference and calculate min diff
    int mini = INT_MAX;
    int n= minutes.size();
    for(int i=0;i<n-1;i++){
        int diff=minutes[i+1]-minutes[i];
        mini=min(diff,mini);
    }
    // special case
    int lastDiff1=(minutes[0]+1440)-minutes[n-1];
    int lastDiff2=minutes[n-1]-minutes[0];
    int lastDiff=min(lastDiff1,lastDiff2);
    return min(mini,lastDiff);
}

int main(){
    // vector <string> str{"12:10","10:15","13:15","17:20","18:00","19:47","23:59"};
     vector <string> str{"00:00","23:59"};
    cout<<findMinDifference(str)<<endl;
}