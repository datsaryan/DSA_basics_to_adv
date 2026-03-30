#include<iostream>
using namespace std;
int sumarray(int arr[], int n){

    if(n==0){
        return 0;
    }
    else{
        int ans = arr[0]+ sumarray(arr + 1, n-1);
        return ans;
    }
    }

int main(){

    int arr[]={3};
    cout<<"sum of array is "<<sumarray(arr,1)<<endl;

    return 0;
}