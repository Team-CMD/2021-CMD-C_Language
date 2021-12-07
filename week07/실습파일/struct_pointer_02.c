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
	
	printf("me의 크기:%d\n", sizeof(me));
	printf("reakwon의 주소 : %p, me가 가리키는 주소 : %p\n", &reakwon, me);
	printf("\n");
	printf("포인터를 이용해서 값을 읽어오는 방법 1");
	printf("수학 : %d, 국어 : %d, 영어 : %d\n", *(me).math, *(me).kor, *(me).eng);
	printf("\n");
	printf("포인터를 이용해서 값을 읽어오는 방법 2");
	printf("수학 : %d, 국어 : %d, 영어 : %d\n", me->math, me->kor, me->eng);
	
	return 0;
}

