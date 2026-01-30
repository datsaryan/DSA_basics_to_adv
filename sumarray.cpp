#include<iostream>
using namespace std;
int sumarray(int arr[],int n){
    int a=0;
    for(int i=0;i<n;i++){
        a=a+arr[i];
    }
    return a;
}
int main(){
    int arr[5]={1,2,-1,4,5};
    cout<<"sum of array is "<<sumarray(arr,5)<<endl;
}