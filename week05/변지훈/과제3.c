#include <stdio.h>
#define SIZE 10

char stack[SIZE];
int top = -1;

int isFull() { // 스택이 꽉 찼는지 아닌지를 검사하는 함수 
	if (top > SIZE - 1) {
		printf("stack FULL!");
		return 1;
	}
	return 0;
}

int isEmpty() { // 스택이 비어있는지 아닌지를 검사하는 함수 
	if (top == -1) {
		printf("stack is empty");
		return 1;
	}
	return 0;
}

void push(char data) {// 스택에 data를 보관하는 함수 
	if (!isFull()) {
		top++;
		stack[top] = data;
	}
}

char pop() {// 스택에 원소를 꺼내고 제거하는 함수 
	char temp = stack[top];
	if (!isFull()) {
		top--;
	}
	return temp;
}

char peek() {// 스택에 맨 위 원소를 반환하는 함수 
	if (!isFull()) {
		return stack[top];
	}
	return 0;
}

void printStack() {// 스택의 모든 원소를 출력하는 함수 
	if (!isFull()) {
		for (int i = 0; i <= top; i++) {
			printf("%c\n", stack[i]);
		}
	}
}



int main() {
	// Please Write your code about "Singly List" 
	char* day[7];
	day[0] = "월요일";
	day[1] = "화요일";
	day[2] = "수요일";
	day[3] = "목요일";
	day[4] = "금요일";
	day[5] = "토요일";
	day[6] = "일요일";
	for (int i = 0; i < 7; i++) {
		printf("%s\n", day[i]);
	}


	// Please Write your code about "Stack"	
	// Below code is test code! Don't touch!!
	printStack();
	push('A');
	push('B');
	push('C');

	printStack(); //출력 A B C

	pop(); //A B
	peek();
	printStack();//출력 A B 

	push('D');//A B D
	printStack(); //출력 A B D

	return 0;
}
