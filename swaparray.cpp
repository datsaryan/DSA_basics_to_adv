#include<iostream>
using namespace std;
void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap the elements
        swap(arr[start], arr[end]);
        // Move towards the middle
        start++;
        end--;
    }
}
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr1[5]={31,4,21,-13,2};
    int arr2[6]={-1,3,4,2,5,1};

    reverse(arr1,5);
    reverse(arr2,6);

    PrintArray(arr1,5);
    PrintArray(arr2,6);

    return 0;
}