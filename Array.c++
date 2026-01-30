#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    char Arr[5]={'A','B','C','D','E'};
    for(int i=0;i<5;i++){
    cout<<Arr[i]<<endl;}
}
