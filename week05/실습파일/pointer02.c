#include <stdio.h>

int main(){
    int *numPtr;      // ������ ���� ����
    int *numPtrr;
    /*
	�ּ� �� : 62fe18
	�Ҵ� �� : 62fe14 
	*/
    int num1 = 10;    // int�� ������ �����ϰ� 10 ����
	/*
	�ּ� �� : 62fe14
	�Ҵ� �� : 10 
	*/
    numPtr = &num1;   // num1�� �޸� �ּҸ� ������ ������ ����
	numPtrr = &numPtr;
	
	printf("%x\n", &num1);
    printf("%x\n", numPtr);    // ������ ���� numPtr�� �� ���
	printf("%x\n", &numPtr);
	
    return 0;
}
