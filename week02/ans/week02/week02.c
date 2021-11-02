#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    char arr[7];
    scanf_s("입력 : %s", arr);

    int i;
    for (i = 0; i < 7; i++) {
        printf("%c ", arr[i]);
    }

    if (arr[0] == arr[6] && arr[1] == arr[5] && arr[2] == arr[4]) {
        printf("this is palindrome!!");
    }
    else {
        printf("this is not palindrome...");
    }
    return 0;
}