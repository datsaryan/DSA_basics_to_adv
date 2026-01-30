#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int i=2;
    while (i<n)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime number for"<<i<<endl;
            
        }
        else{
            cout<<n<<" is a prime number for"<<i<<endl;
        }
        i++;
    
    
    }
}