# include <stdio.h>
# define SIZE 10

char stack[SIZE];
int top = -1;

int isFull() { // ������ �� á���� �ƴ����� �˻��ϴ� �Լ� 
	if (top == SIZE - 1) {
		return 1;
	}
	else return 0;
}

int isEmpty() { // ������ ����ִ��� �ƴ����� �˻��ϴ� �Լ� 
	if (top == -1) {
		return 1;
	}
	else return 0;
}

void push(char data) {// ���ÿ� data�� �����ϴ� �Լ� 
	if (!isFull()) {
		top = top + 1;
		stack[top] = data;
	}

}

char pop() {// ���ÿ� ���Ҹ� �����ϴ� �Լ� 
	if (!isEmpty()) {
		top--;
		return stack[top + 1];
	}
	return 0;
}

char peek() {// ���ÿ� �� �� ���Ҹ� ��ȯ�ϴ� �Լ� 
	return stack[top];
}

void printStack() {// ������ ��� ���Ҹ� ����ϴ� �Լ� 
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
	char *SinglyList[] = {"������","ȭ����","������","�����","�ݿ���","�����","�Ͽ���"};
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

