#include<stdio.h>
#include<string.h>

int is_balanced(char input[]){
    char stack[100], last_char;
    int top, i, len;

    top = -1;
    len = strlen(input);

    for(i=0;i<len;i++){
        if(input[i] == '(' || input[i] == '{' || input[i] == '[')
        {
            top++;
            stack[top] = input[i];
            printf("i = %d, top = %d and Stack = %c\n",i,top,stack[top]);
        }
        else if((input[i]==')' && stack[top]=='(') || (input[i]=='}'
                && stack[top]=='{') || (input[i]==']' && stack[top]=='['))
        {
            top = top - 1; //Stack pop
        }
    }
    printf("top =%d\n",top);
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char input[100];

    printf("Enter the value of any input value: ");
    scanf("%s", input);

    if(is_balanced(input)){
        printf("%s is balanced\n", input);
    }else{
        printf("%s is not balanced\n", input);
    }
}
