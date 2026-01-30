#include <iostream>
using namespace std;
int main(){
    int num = 10;
    cout << &num << endl;
    int *ptr = &num;
    cout << *ptr << endl;
    return 0;
}