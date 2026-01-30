#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the amount"<<endl;

cin>>n;
int n100=0,n50=0, n20=0, n1=0;
switch(1){
    case 1:{
        if (n/100!=0){
            n100=n/100;
            n=n-100*n100;
        }

    }
    case 2: {
        if (n/50!=0){
            n50=n/50;
            n=n-50*n50;
        }
    }
    case 3: {
        if (n/20!=0){
            n20=n/20;
            n=n-20*n20;
        }
    }
    case 4: {
        if (n!=0){
            n1=n;

        }
    }
}
cout<<"Amount of 100rs notes:"<<n100<<endl;
cout<<"Amount of 50rs notes:"<<n50<<endl;
cout<<"Amount of 20rs notes:"<<n20<<endl;
cout<<"Amount of 100rs notes:"<<n1<<endl;

}