#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    switch(operation) {
        case '+':
        cout <<"result "<<a+b<<endl;
        break;
        case '-':
        cout<<"result "<<a-b<<endl;
        break;
        case '*':
        cout<<"result "<<a*b<<endl;
        break;
        case '/':
        cout<<"result "<<a/b<<endl;
        break;
        default:
        cout<<"Invalid operation"<<endl;    
}
}