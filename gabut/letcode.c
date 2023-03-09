#include <stdbool.h>
#include <string.h>

bool isValid(char *s) {
    int len = strlen(s);
    char stack[len + 1];
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else if (top >= 0) {
            char c = stack[top--];
            if (s[i] == ')' && c != '(') return false;
            if (s[i] == '}' && c != '{') return false;
            if (s[i] == ']' && c != '[') return false;
        } else {
            return false;
        }
    }
    
    return top == -1;
}
