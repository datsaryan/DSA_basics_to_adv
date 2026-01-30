#include<iostream>
using namespace std;
int findMid(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        return a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        return b;
    } else {
        return c;
    }
}
int main(){
int a=findMid(5,6,7);
cout<<a<<endl;
return 0;
}