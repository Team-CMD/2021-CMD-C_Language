#include <stdio.h>

int main(){
    int *numPtr;      // 포인터 변수 선언
    int *numPtrr;
    /*
	주소 값 : 62fe18
	할당 값 : 62fe14 
	*/
    int num1 = 10;    // int형 변수를 선언하고 10 저장
	/*
	주소 값 : 62fe14
	할당 값 : 10 
	*/
    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
	numPtrr = &numPtr;
	
	printf("%x\n", &num1);
    printf("%x\n", numPtr);    // 포인터 변수 numPtr의 값 출력
	printf("%x\n", &numPtr);
	
    return 0;
}
