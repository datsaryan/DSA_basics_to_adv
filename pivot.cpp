#include<iostream>
using namespace std;

int pivotIndex(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    
    while(s<e){
        if (arr[mid] >= arr[0]){
            s=mid +1;
        }
        else{
            e=mid;
        }
       mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(int arr[], int s,int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int main(){
    int arr[]={10,11,12,1,2,3,4};
    int n=7;
    int a=pivotIndex(arr,n);
    cout<<a<<endl;
    cout<<"Enter k: ";
    int k;
    cin>>k;
    if (arr[a]<=k && k<=arr[n-1]){
        cout<<binarySearch(arr,a,n-1,k);
    }
    else{
        cout<<binarySearch(arr,0,a-1,k);
    }
    return 0;
}