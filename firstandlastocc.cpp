#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
    int s=0;
    int e= n-1;
    int ans = -1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1; // search in left part
        }
        else if(key>arr[mid]){
            s=mid+1; // search in right part
        }
        else if(key<arr[mid]){
            e=mid-1; // search in left part
        }
        mid=s+(e-s)/2;
        }
    return ans; // return the first occurrence index
}
int lastocc(int arr[], int n, int key){
    int s=0;
    int e= n-1;
    int ans = -1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1; // search in left part
        }
        else if(key>arr[mid]){
            s=mid+1; // search in right part
        }
        else if(key<arr[mid]){
            e=mid-1; // search in left part
        }
        mid=s+(e-s)/2;
        }
    return ans; // return the first occurrence index
}
int main(){
    int arr[7]={1,2,3,3,3,4,5};
    int a =firstocc(arr, 7, 3);
    cout << "First occurrence of 3 is at index: " << a << endl;
    int b =lastocc(arr, 7, 3);
    cout << "Last occurrence of 3 is at index: " << b << endl;
    return 0;

}