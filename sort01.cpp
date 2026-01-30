#include<iostream>
using namespace std;
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortarray(int arr[], int n) {
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;   
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main(){
    int arr[7]= {1,0,0,1,0,1,0};
    sortarray(arr, 7);
    PrintArray(arr,7);
    cout << "Sorted array: ";
    return 0;
}