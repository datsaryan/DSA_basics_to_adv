#include <iostream>
using namespace std;

int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    cout<< &ptr<< endl; // Output: 1
    cout << arr<< endl; // Output: 1

    char ch[5] = {'H', 'e', 'l', 'l', 'o'};
    char *ptr2 = ch; // Pointer to the first element of the array
    cout<< ptr2[0]<< endl; // Output: H
    cout <<ch<< endl; // Output: H

    return 0;
}