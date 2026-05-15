#include<iostream>
using namespace std;

bool ispall(int x){
    int temp=x;
    int rev=0;
    while(temp>0){
        int lastdigit=temp%10;
        rev=rev*10+lastdigit;
        temp=temp/10;
    }
    if(rev==x){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int x= 121;
    if(ispall(x)){
        cout<<"pallindrome";
    }    
    else{
        cout<<"not pallindrome";
    }
    return 0;
}