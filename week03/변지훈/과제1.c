/*Palindrome은 회문이라 불려며 정방향에서 읽는 넋과 역방향에서 읽는 것이 동일한 낱말,숫자,문자열을 뜻한다.
검출하기 위해 사용되는 낱말,숫자,문자열의 모음을 '구문'이라고 칭하고
구문사이에 속해 있는 띄어쓰기나 특수문자, 문장부호는 무시한다.
하나의 문자열을 입력 받아서 그 문자열이 회문인지 아닌지 검출하는 프로그램을 작성하시오.
(단, 문자열 입력 시, 소문자로 된 알파벳 a~z로만 이루어진 7자의 문자열이 입력되며,
공백과 띄어쓰기, 특수문자, 문장부호는 고려하지 않도록 한다.)*/

#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100] = { 0 };
    int length = 0;
    int a = 0;

    printf("영단어를 입력해주세요.\n");
    scanf_s("%s", str, 100);
    length = strlen(str);


    while (str[a] == str[length - 1]) //(-tap)
    {
        a++;
        length--;
    }

    if (length == 0)
    {
        printf("This is palilndrome!!");
    }

    else
    {
        printf("This is not palilndrom...");
    }
    return 0;
}
