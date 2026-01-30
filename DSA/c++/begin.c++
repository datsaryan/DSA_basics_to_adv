#include <iostream>

using namespace std;
int main() {
    //This is a single-line comment
    //Output a message to the console

    /*
    This is a multi-line comment.
    It can span multiple lines.
    */

    // Uncomment the following lines to see more examples
/*
    //int a = 5;
    //int b = 10;
    //int sum = a + b;
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    cout << "You entered: " << x << endl;
    //std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;


    int b = 'a';
    std::cout << b << std::endl;
    char a = 98 ;
    cout << a << endl;

int a;
cin>>a;
if (a>0){
    cout<<"postive "<<a<<endl; 
}
else cout<<"negative "<<a<<endl;
*/
char ch;
cin>>ch;
if (ch>='A'&&ch<='Z'){
    cout<<"Uppercase letter: "<<ch<<endl;
}
else if (ch>='a'&&ch<='z'){
    cout<<"Lowercase letter: "<<ch<<endl;
}
else if (ch>='0'&&ch<='9'){
    cout<<"Digit: "<<ch<<endl;
}
else{
    cout<<"Special character: "<<ch<<endl;
}
}