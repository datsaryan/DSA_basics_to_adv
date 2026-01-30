#include <vector>
#include<iostream>
using namespace std;
int ispossible(vector<int> &stalls, int k,int mid){
    int cowcount=1;
    int lastpostion=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastpostion>=mid){
            cowcount++;
            if(cowcount>=k){
                return true;
            }
            lastpostion=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());

    int s=0;
    int maxi =-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main() {
    vector<int> stalls={4,2,1,3,6};
    int k=2;
    cout<<aggressiveCows(stalls,k)<<endl;
    return 0;
}