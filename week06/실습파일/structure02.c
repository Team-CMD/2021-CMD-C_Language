#include <stdio.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main(){
    // name���� "ȫ�浿", age���� 30, address���� "����� ��걸 �ѳ���"
    struct Person p1 = { .name = "ȫ�浿", .age = 30, .address = "����� ��걸 �ѳ���" };

    printf("�̸�: %s\n", p1.name);       // �̸�: ȫ�浿
    printf("����: %d\n", p1.age);        // ����: 30
    printf("�ּ�: %s\n", p1.address);    // �ּ�: ����� ��걸 �ѳ���

    // name���� "��浿", age���� 40, address���� "����� ���ʱ� ������"
    struct Person p2 = { "��浿", 40, "����� ���ʱ� ������" };

    printf("�̸�: %s\n", p2.name);       // �̸�: ��浿
    printf("����: %d\n", p2.age);        // ����: 40
    printf("�ּ�: %s\n", p2.address);    // �ּ�: ����� ���ʱ� ������

    return 0;
}
