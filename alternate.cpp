#include<iostream>
using namespace std;
void alt(int arr[], int n) {
    int start=0;
    int end=1;
    for (int i=0;i<n;i+=2){    
        while(end<=n){
            swap(arr[start], arr[end]);
            start +=2;
            end+=2;
        }
    }
}
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
  int arr[6] = {1, 2, 3, 4, 5,6};
  
  alt(arr,5);
  
  cout << "Array after alternate swapping: ";
  PrintArray(arr,6);
  return 0;
}