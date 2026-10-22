#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    stack<int> st;

    cout << "Enter postfix expression: ";
    cin >> s;

    for (char c : s) {
        if (c >= '0' && c <= '9')
            st.push(c - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            switch (c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }

    cout << "Result: " << st.top();
    return 0;
}