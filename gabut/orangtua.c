#include <stdio.h>
#include <stdbool.h>

int main() {
    char stack[10000];
    int top = -1;
    char s[10000];
    printf("s = ");
    scanf("%s", s);
    char* p = s;
    while(*p != '\0') {
        if(*p == '(' || *p == '[' || *p == '{') {
            stack[++top] = *p;
        }
        else if(*p == ')') {
            if(top == -1 || stack[top] != '(') {
                printf("false\n");
                return 0;
            }
            else {
                top--;
            }
        }
        else if(*p == ']') {
            if(top == -1 || stack[top] != '[') {
                printf("false\n");
                return 0;
            }
            else {
                top--;
            }
        }
        else if(*p == '}') {
            if(top == -1 || stack[top] != '{') {
                printf("false\n");
                return 0;
            }
            else {
                top--;
            }
        }
        p++;
    }
    if(top != -1) {
        printf("false\n");
        return 0;
    }
    printf("true\n");
    return 0;
}
