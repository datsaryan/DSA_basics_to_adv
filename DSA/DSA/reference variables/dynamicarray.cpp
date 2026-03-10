#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i]; // accessing array elements using pointer notation
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n]; // dynamically allocated array of size n

    for(int i = 0; i < n; i++){
        cin >> arr[i]; // input elements into the array
    }
    int ans = getsum(arr,n); // passing the pointer to the array to the function
    cout << ans << endl; // output the sum of the array elements

    return 0;

}