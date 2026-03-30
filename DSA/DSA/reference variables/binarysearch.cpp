#include<iostream>
using namespace std;
bool issorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr + 1, n - 1);
    }
}
int main(){
    int arr[]={1,2,5,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(issorted(arr,n)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    
    return 0;
}