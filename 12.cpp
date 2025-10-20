#include <string> // Required for std::string
#include <stack>  // Required for std::stack

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> para; // Use char for characters
        for (int i = 0; i < s.length(); ++i) { // Use s.length() and ++i
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') { // Corrected comparisons
                para.push(s[i]);
            } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                // If stack is empty, there's no opening parenthesis to match
                if (para.empty()) {
                    return false;
                }
                char top = para.top();
                para.pop();

                // Check for mismatch
                if ((s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top != '[') ||
                    (s[i] == '}' && top != '{')) {
                    return false;
                }
            }
        }
        // After iterating through the string, if the stack is empty,
        // all opening parentheses were matched. Otherwise, some are unmatched.
        return para.empty();
    }
};
