#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key;
    cin>>key;
    bool found = search(arr,5,key);
    if(found){
        cout<<"Element is present in the array"<<endl;
    } else {
        cout<<"Element is not present in the array"<<endl;
    }
    return 0;
}