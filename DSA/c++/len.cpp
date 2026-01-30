#include <iostream>
using namespace std;
void reverse(char str[], int n){
    int s=0;
    int e=n-1;
    while (s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int getLength(char string[]) {
    int count=0;
    for (int i=0;string[i]!='\0';i++){
        count++;
    }
    return count;
}
int main() {
    char str[20];
    cout << "Enter a string: "<<endl;
    cin>>str;
    cout<<getLength(str);
    reverse(str,getLength(str));
    cout<<endl<<"Reversed string is: "<<str<<endl;
    return 0;
}