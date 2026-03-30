#include<iostream>
using namespace std;

void reverse(int i, int j, string &s) {
    if (i >= j) return;
    swap(s[i], s[j]);
    reverse(i + 1, j - 1, s);
}

int main() {
    string name = "Aryan";
    reverse(0, name.length() - 1, name);
    cout << "Reverse of name is " << name << endl;
    return 0;
} 