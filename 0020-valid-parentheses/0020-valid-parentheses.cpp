class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            if (st.empty()) {
                return false;
            }
            if (s[i] == '}') {
                if (st.top() == '{') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (st.top() == '[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
            if (s[i] == ')') {
                if (st.top() == '(') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

    }
    return st.empty();// Write your code here.
    }
};