#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count =0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pvt=s+count;
    swap(arr[pvt],arr[s]);

    int i=s, j=e;
    while(i<pvt && j>pvt){
            while (arr[i] <= pivot && i < pvt) i++;  // was: if
            while (arr[j] > pivot && j > pvt)  j--;  // was: if
            if (i < pvt && j > pvt) {
                swap(arr[i++], arr[j--]);
            }
    }
    return pvt;
}


void quicksort(int arr[],int s,int e){
    if(s>=e)
        return;

    int p = partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main(){

    int arr[5]= {6,2,4,1,5};
    int n=5;
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<< endl;
    }

    return 0;
}