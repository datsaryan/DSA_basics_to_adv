#include<iostream>
using namespace std;
int power(int a,int b){
    int result =1;
    if (b==0){
        return 1;
    }
    else
    {
        for (int i=1;i<b;i++)
        {result = result *a;
        
        }
        return result;
    }
    }

int main(){
    int a,b;
    cout<<"Enter the base number: ";
    cin>>a;
    cout<<"Enter the exponent: ";
    cin>>b;
    
    int c =power(a, b);
    cout<<"The result of "<<a<<" raised to the power of "<<b<<" is: "<<c<<endl;

    
    return 0;

}