#include<iostream>
using namespace std;
int maxArray(int arr[],int n){
    int max= INT_MIN;
    for (int i=0;i<n;i++){
        if(max <arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int minArray(int arr[],int n){
    int min= INT_MAX;
    for (int i=0;i<n;i++){
        if(min >arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout<<"entert the element "<<endl;
        cin>>arr[i];
    }
    cout<<"maximum element "<<maxArray(arr,size)<<endl;
    cout<<"minimum element "<<minArray(arr,size)<<endl;
    return 0;
}