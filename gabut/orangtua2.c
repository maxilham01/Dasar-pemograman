#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 10005

char stack[MAX_SIZE];
int top = -1;

bool isMatchingPair(char left, char right) {
    if (left == '(' && right == ')') {
        return true;
    } else if (left == '[' && right == ']') {
        return true;
    } else if (left == '{' && right == '}') {
        return true;
    } else {
        return false;
    }
}

bool isValid(char* s) {
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (top == -1 || !isMatchingPair(stack[top], s[i])) {
                return false;
            } else {
                top--;
            }
        }
    }
    if (top == -1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char s[MAX_SIZE];
    printf("s = ");
    scanf("%s", s);
    if (isValid(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}