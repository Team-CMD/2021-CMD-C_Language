#include<stdio.h>

int main(void) {
	char str[8];

	scanf_s("%s", str, 8);
	printf("%s \n", str);

	if (str[0] == str[6] && str[1] == str[5] && str[2] == str[4]) {
		printf("this is palindrome!!");
	}
	else {
		printf("this is not palindrome...");
	}

	return 0;
}