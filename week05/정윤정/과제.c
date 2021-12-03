# include <stdio.h>
# define SIZE 10

char stack[SIZE];
int top = -1;

int isFull() { // 스택이 꽉 찼는지 아닌지를 검사하는 함수 
	if (top == SIZE - 1) {
		return 1;
	}
	else return 0;
}

int isEmpty() { // 스택이 비어있는지 아닌지를 검사하는 함수 
	if (top == -1) {
		return 1;
	}
	else return 0;
}

void push(char data) {// 스택에 data를 삽입하는 함수 
	if (!isFull()) {
		top = top + 1;
		stack[top] = data;
	}

}

char pop() {// 스택에 원소를 제거하는 함수 
	if (!isEmpty()) {
		top--;
		return stack[top + 1];
	}
	return 0;
}

char peek() {// 스택에 맨 위 원소를 반환하는 함수 
	return stack[top];
}

void printStack() {// 스택의 모든 원소를 출력하는 함수 
	int i;
	if (top == -1) {
		printf("empty \n");
	}
	for (i = 0; i <= top; i++) {
		printf("%c \n",stack[i]);
	}
}

int main() {
	// Please Write your code about "Singly List" 
	char *SinglyList[] = {"월요일","화요일","수요일","목요일","금요일","토요일","일요일"};
	// Please Write your code about "Stack"


	// Below code is test code! Don't touch!!
	printStack();
	push('A');
	push('B');
	push('C');
	printStack();
	pop();
	peek();
	printStack();
	push('D');
	printStack();

	return 0;
}

