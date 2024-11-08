#include<iostream>

using namespace std;

void compare(string &a, string b){ 

    for (int j = 0; j < a.length(); j++) {
        if (a[j] != b[j]) {
           a[j] = '?';
        }
    }
}

void change(string *list,int count) {
    
    if (count == 1) {
        return;
    }

    for (int i = 0; i < count; i++) {
        compare( list[0], list[i]);
    }
}

int main() {
    int count = 0;
    cin >> count;
    string *b= new string[count];
    string input;
    for (int i = 0; i < count; i++) {
        cin >> input;
        b[i] = input;
    }

    change(b,count);

    cout << b[0];
}