#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include<ctype.h>

typedef struct {
    /* Declare the stack */
    float arr[20];
} Stack;

/*
Complete the evaluate function which takes the postfix expression
and the length of expression as arguments and returns the result.
*/
Stack s;
int top = -1;

void push(float n) {
    s.arr[++top] = n;
}

float pop() {
    return s.arr[top--]; 
}

float evaluate(char expression[], int len) {
    int i=0;
    float A,B,val;
    char ch;
    while(expression[i] != '\0') {
        ch = expression[i];
        if(isdigit(ch)) {
            push(ch - '0');
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            A = pop();
            B = pop();
            switch (ch) {
                case '+':
                    val = B + A;
                    break;
                case '-':
                    val = B - A;
                    break;
                case '*':
                    val = B * A;
                    break;
                case '/':
                    val = B / A;
                    break;
            }
            push(val);
        }
        i++;
    }
    return pop();
}
int main() {
    int q,n;
    scanf("%d",&q);
    while(q--) {
        scanf("%d", &n);
        char *exp = (char *)malloc(n * sizeof(char));
        scanf("%s", exp);
        printf("%.1f\n", evaluate(exp, n));
    }
    return 0;
}