#include <stdio.h>
#include <string.h>
int lenght;
int i, top = -1;

int main() {
    char code[6] = "(){}[]"; // () [({})]
    char stack[10];
    char temp;
    scanf ("%s", code);
    lenght = strlen(code);

    if(lenght % 2 == 0)
    {
      for(i=0; i<lenght; i++)
      {
          //close code early 
          if((code[i] == ')' || code[i] == '}' || code[i] == ']') && top == -1){
            break;
          }
          //entry code
          if((code[i] == '{' || code[i] == '[' || code[i] == '(')){
              top++;
              stack[top]=code[i];
          }
          else{
            temp=stack[top];
            top--;
            if((temp=='(' && code[i] == ')' ||temp== '{' && code[i] == '}' || temp=='[' && code[i] == ']')){
                continue;
            }
            else{
                break;
            }
          }
      }
      if(i==lenght && top==-1){
        printf("Syntax Valid");
      }
      else{
        printf("Syntax Invalid");
      }
    }

    else{
        printf("Syntax Invalid");
    }

    return 0;
}