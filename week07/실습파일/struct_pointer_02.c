# include <stdio.h>

typedef struct student{
	char *name;
	int math;
	int kor;
	int eng;
}student;

int main(){
	student reakwon = {"REAKWON", 40,50,40};
	student *me = &reakwon;
	
	printf("me�� ũ��:%d\n", sizeof(me));
	printf("reakwon�� �ּ� : %p, me�� ����Ű�� �ּ� : %p\n", &reakwon, me);
	printf("\n");
	printf("�����͸� �̿��ؼ� ���� �о���� ��� 1");
	printf("���� : %d, ���� : %d, ���� : %d\n", *(me).math, *(me).kor, *(me).eng);
	printf("\n");
	printf("�����͸� �̿��ؼ� ���� �о���� ��� 2");
	printf("���� : %d, ���� : %d, ���� : %d\n", me->math, me->kor, me->eng);
	
	return 0;
}

