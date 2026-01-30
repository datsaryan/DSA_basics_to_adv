#include<iostream>
using namespace std;
int lowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
int getLength(char str[]) {
    int count=0;
    for (int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
bool ispalindrome(char str[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(lowercase(str[s])!=lowercase(str[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char str[20];
    cout<<"Enter a string: "<<endl;
    cin>>str;
    int length=getLength(str);
    if(ispalindrome(str,length)){
        cout<<"The string is a palindrome"<<endl;
    }
    else{
        cout<<"The string is not a palindrome"<<endl;
    }
    return 0;
}