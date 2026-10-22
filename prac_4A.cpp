#include <iostream>
#include <stack>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    string s, p = "";
    stack<char> st;

    cout << "Enter infix expression: ";
    cin >> s;

    for (char c : s) {
        if (isalnum(c))
            p += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                p += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        }
        else {
            while (!st.empty() && st.top() != '(' &&
                   (prec(st.top()) > prec(c) ||
                   (prec(st.top()) == prec(c) && c != '^'))) {
                p += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        p += st.top();
        st.pop();
    }

    cout << "Postfix: " << p;
    return 0;
}