#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

/* 구조체 선언 */
struct Person {
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
};

/* 구조체 선언과 동시에 변수할당 */
struct Lecture {
	char title[20];
	int lecture_num;
	char explain[100];	
}l1;

int main(){
    struct Person p1;     // 구조체 변수 선언

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "최재훈");
    p1.age = 24;
    strcpy(p1.address, "대전광역시 중구 태평동");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);       // 이름: 최재훈 
    printf("나이: %d\n", p1.age);        // 나이: 24
    printf("주소: %s\n", p1.address);    // 주소: 대전광역시 중구 태평동 

	printf("\n\n"); 

	// 점으로 구조체 멤버에 접근하여 값 할당 
	strcpy(l1.title, "C언어 스터디");
    l1.lecture_num = 211123;
    strcpy(l1.explain, "Week05 구조체와 포인터");

	// 점으로 구조체 멤버에 접근하여 값 출력
    printf("강의  명: %s\n", l1.title);       			// 강의  명 : C언어 스터디 
    printf("강의번호: %d\n", l1.lecture_num);        	// 강의번호 : 211123
    printf("강의내용: %s\n", l1.explain);    			// 강의내용 : Week05 구조체와 포인터 
    return 0;
}
