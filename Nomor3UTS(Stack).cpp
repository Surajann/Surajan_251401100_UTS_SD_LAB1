#include <iostream>
#include <string>
using namespace std;

#define MAX 100
char stack[MAX];
int top = -1;

void push(char c) {
        top++;
        stack[top] = c;
}

char pop() {
    if (top == -1) {
        cout << "stack kosong\n";
        return ' ';
    }
    top--;
    return stack[top + 1];
}

int main() {
    string kata, dibalik = "";

    cout << "Masukkan kata: ";
    cin >> kata;

    for (int i = 0; i < (int)kata.length(); i++) {
        push(kata[i]);
    }

    cout << "Pengecekan:\n";

    while (top != -1) {
        dibalik += pop();
    }

    cout << "Kata dibalik: " << dibalik << "\n";

    if (dibalik == kata) {
        cout << "kesimpulan : kata ini adalah palindron\n";
    } 
    else {
        cout << "kesimpulan : kata ini bukan palindron\n";
    }

    return 0;
}
