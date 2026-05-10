#include<iostream>
using namespace std;

// void diagonal(void arr[][]){
//     for (int i=2;i<=0;i--){
//         for(int j=0;j>=2;j++){
//             cout<<arr[i][j];
//         }
//     }
// }
int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    
    for (int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<=2;i++){
            cout<<arr[i][2-i]<<" ";
            cout<<endl;
            
    }
   // diagonal(arr);
    return 0;

}