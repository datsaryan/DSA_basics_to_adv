#include<iostream>
using namespace std;
bool linearsearch(int arr[], int n, int key){
    if(n==0){
        return false;
    }
    else{
        if(arr[0]==key){
            return true;
        }
        else{
            return linearsearch(arr+1,n-1,key);
        }
}
}
int main(){

    int arr[]={1,2,3,4,5};
    int n=5;
    int key = 6;
    bool ans = linearsearch(arr,n,key);
    if(ans){
        cout<<"key is present in array"<<endl;
    }
    else{
        cout<<"key is not present in array"<<endl;
    }
    return 0;

}