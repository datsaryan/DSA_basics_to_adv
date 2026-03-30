#include<iostream>
using namespace std;
bool issearch(int arr[], int s, int e, int key){
    int mid = s + (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
    return true;
    }
    else{ 
        if (arr[mid] < key){
        return issearch(arr,mid+1,e,key);
        }
        else {
            return issearch(arr,s,mid-1,key);
        }

        }
    
    }



int main(){
    
    int arr [] ={};
    int s=0;
    int e=0;
    int key = 0;
    bool ans = issearch(arr,s,e,key);
    if(ans){
        cout<<"key is present in array"<<endl;
    }
    else{
        cout<<"key is not present in array"<<endl;
    }
    return 0;
}