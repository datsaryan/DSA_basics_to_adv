#include<iostream>
using namespace std;

void update(int n){
    n++;
}
void update1(int &n){
    n++;
}

int main(){
    int n = 5;
    cout<< "before: "<< n<< endl; // Output: 5
    update(n);
    cout<< "after: "<< n<< endl; // Output: 5 (unchanged)
    update1(n);
    cout<< "after update1: "<< n<< endl; // Output: 6 (

    return 0;
}


