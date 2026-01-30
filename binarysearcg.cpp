#include<iostream>
using namespace std;
// Binary Search Function
int binarysearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid; // Key found, return index
        }
        else if(key>arr[mid]){
            start=mid+1; // Search in the right half
        }
        else{
            end=mid-1; // Search in the left half
        }
        mid = start + (end-start)/2;
    }
    return -1; // Key not found, return -1
}
int main(){
    int odd[]={1,2,3,4,5};
    int even[]={6,7,8,9,10,11};
    int oddsearch=binarysearch(odd,5,5);
    cout<<"oddindex is : "<<oddsearch<<endl;
    int evensearch=binarysearch(even,6,6);
    cout<<"evenindex is : "<<evensearch<<endl;
}