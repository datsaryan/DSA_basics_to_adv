#include<iostream>
using namespace std;

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


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 0,6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 0,5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}
