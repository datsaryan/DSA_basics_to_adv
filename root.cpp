#include<iostream>
using namespace std;
long long int root(int a){
    int s=0;
    int e=a;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while (s<=e){
        long long int midSq=mid*mid;
        if (midSq>a){
            e=mid-1;
        }
        if (midSq<a){
            ans=mid;
            s=mid+1;
        }
        if(midSq==a){
            return mid;
        }
        mid=s+(e-s)/2;
    }return ans;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b=root(a);
    cout<<b;
    return 0;
}