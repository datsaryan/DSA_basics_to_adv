#include<iostream>
using namespace std;
bool occ(int arr[],int n){
    int i=0;
    int a=0;
    int j=1;
    while(i<n){
        if(arr[i]==arr[j])
        {   a++;
            cout<<"the element is:"<<arr[i]<<endl;
        }
        i++;
        j++;
    }
        cout<<"The number of occurances is: "<<a<<endl;
        if(a>0){
            return 1;
        }
    return 0;
}
int main(){
    int arr[5] ={4,4,2,-5,-4};
    occ(arr,5);
    return 0;
}