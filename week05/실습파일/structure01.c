#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

/* ����ü ���� */
struct Person {
    char name[20];        // ����ü ��� 1
    int age;              // ����ü ��� 2
    char address[100];    // ����ü ��� 3
};

/* ����ü ����� ���ÿ� �����Ҵ� */
struct Lecture {
	char title[20];
	int lecture_num;
	char explain[100];	
}l1;

int main(){
    struct Person p1;     // ����ü ���� ����

    // ������ ����ü ����� �����Ͽ� �� �Ҵ�
    strcpy(p1.name, "������");
    p1.age = 24;
    strcpy(p1.address, "���������� �߱� ����");

    // ������ ����ü ����� �����Ͽ� �� ���
    printf("�̸�: %s\n", p1.name);       // �̸�: ������ 
    printf("����: %d\n", p1.age);        // ����: 24
    printf("�ּ�: %s\n", p1.address);    // �ּ�: ���������� �߱� ���� 

	printf("\n\n"); 

	// ������ ����ü ����� �����Ͽ� �� �Ҵ� 
	strcpy(l1.title, "C��� ���͵�");
    l1.lecture_num = 211123;
    strcpy(l1.explain, "Week05 ����ü�� ������");

	// ������ ����ü ����� �����Ͽ� �� ���
    printf("����  ��: %s\n", l1.title);       			// ����  �� : C��� ���͵� 
    printf("���ǹ�ȣ: %d\n", l1.lecture_num);        	// ���ǹ�ȣ : 211123
    printf("���ǳ���: %s\n", l1.explain);    			// ���ǳ��� : Week05 ����ü�� ������ 
    return 0;
}
