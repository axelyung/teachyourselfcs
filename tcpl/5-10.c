#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

double stack[STACK_SIZE];
int stack_height = 0;

void push(double val);
double pop();
double calc(char *sign, double left, double right);
int is_operator(char *sign[]);

int main(int argc, char *argv[]) {
    printf("argc = %d\n", argc);
    for (int i = 1; i < argc; i++) {
	printf("argv[%d] = %s\n", i, argv[i]);

	if (is_operator(&argv[i])) {
	    double val = calc(argv[i], pop(), pop());
	    push(val);
	} else {
	    push(atof(argv[i]));
	}
    }

    printf("%f\n", pop());
    return 0;
}

void push(double val) {
    printf("pushing %f\n", val);
    stack[stack_height++] = val;
}
double pop() {
    double val = stack[--stack_height];
    printf("popping %f\n", val);
    return val;
}

char valid_operators[4] = "+-*/";
int is_operator(char *sign[]) {
    for (int i = 0; i < 4; i++) {
	if (*sign[0] == valid_operators[i]) return 1;
    }
    printf("%s is not a valid operator\n", *sign);
    return 0;
}

double calc(char *sign, double left, double right) {
    switch (*sign) {
	case '+':
	    return left + right;
	case '-':
	    return left - right;
	case '*':
	    return left * right;
	case '/':
	    return left / right;
    }

    exit(1);
}

