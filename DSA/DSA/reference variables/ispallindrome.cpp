#include<iostream>
using namespace std;
bool ispallindrome(string s, int i, int j){

    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return ispallindrome(s,i+1,j-1);
    }
}

int main(){

    string name = "Aryan";
    cout<<""<<endl;
    if(ispallindrome(name,0,name.length()-1)){
        
        cout<<"string is a pallindrome"<<endl;
    }
    else{
        cout<<"string is not a pallindrme"<<endl;
    }
    cout<<" "<<endl;
    return 0;
}