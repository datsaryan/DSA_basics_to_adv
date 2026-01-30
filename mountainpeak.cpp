#include<iostream>
using namespace std;
int mountainpeek(int arr[],int size){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
    return s;
}
int main(){
    int arr[]={3,4,5,6,7,2,1};
    int size=7;
    int a = mountainpeek(arr,size);
    cout<<"Mountain Peak is at index: "<<a<<endl;
    return 0;

}