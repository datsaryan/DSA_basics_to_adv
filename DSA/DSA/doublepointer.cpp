#include <iostream>
using namespace std;

int main(){

    int i = 5;
    int *p1=&i;
    int **p2=&p1;

    cout<< endl<< endl<< "running successfully"<< endl<<endl;

    cout<< "value of i: "<< i<< endl; // Output: 5
    cout<< "value of p1: "<< p1<< endl; // Output: address of i
    cout<< "value of p2: "<< p2<< endl; // Output: address of p1

    cout<< "value pointed to by p1: "<< *p1<< endl; // Output: 5
    cout<< "value pointed to by p2: "<< *p2<< endl; //
}