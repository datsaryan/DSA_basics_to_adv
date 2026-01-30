#include<iostream>
using namespace std;
int reverseArray(int arr[],int n){
    int temparr[n];
    for (int i=0;i<n;i++){
        int start=i;
        int end=n-i-1;
        temparr[i]=arr[end];
        temparr[end]=arr[start];
    }
    for (int i=0;i<n;i++){
        cout<<temparr[i]<<" ";
    }
    return 0;
}
int main(){
    int arr[5]={43,23,12,3,6};
    cout<<"reversed array is: ";
    return reverseArray(arr,5);
}