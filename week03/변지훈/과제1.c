/*Palindrome�� ȸ���̶� �ҷ��� �����⿡�� �д� �̰� �����⿡�� �д� ���� ������ ����,����,���ڿ��� ���Ѵ�.
�����ϱ� ���� ���Ǵ� ����,����,���ڿ��� ������ '����'�̶�� Ī�ϰ�
�������̿� ���� �ִ� ���⳪ Ư������, �����ȣ�� �����Ѵ�.
�ϳ��� ���ڿ��� �Է� �޾Ƽ� �� ���ڿ��� ȸ������ �ƴ��� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(��, ���ڿ� �Է� ��, �ҹ��ڷ� �� ���ĺ� a~z�θ� �̷���� 7���� ���ڿ��� �ԷµǸ�,
����� ����, Ư������, �����ȣ�� ������� �ʵ��� �Ѵ�.)*/

#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100] = { 0 };
    int length = 0;
    int a = 0;

    printf("���ܾ �Է����ּ���.\n");
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
