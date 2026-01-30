#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int ram(int arr[], int n) {
    int temp[n];
    int i=0;
    int j=n-1;
    while(i<j){
        temp[0]=arr[j];
        arr[j]=arr[i];
        arr[i]=temp[0];
        i++;
        j--;
            
        }
    
    return 0;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    ram(arr, 5);
    printArray(arr, 5);
    return 0;
}