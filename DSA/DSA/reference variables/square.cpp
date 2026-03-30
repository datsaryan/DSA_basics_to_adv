#include<iostream>
using namespace std;

int square(int a,int b){
    if(b==0){
        return 1;

    }
    if (b==1)
    {
        return a;
    }
    int ans = square(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*a;
    }

}


int main(){

    int a,b;
    cin>>a;
    cin>>b;
    int ans = square(a,b);
    cout<<"The square of "<<a<<" is "<<ans<<endl;
    return 0;
}