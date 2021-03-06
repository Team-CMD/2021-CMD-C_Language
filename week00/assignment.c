# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void menu(){
	printf("------------------------------\n");
	printf("|    베스킨 라빈스 31 Game    |\n");
	printf("------------------------------\n\n");
	printf("GAME START!");
	printf("※ 1부터 3까지의 수를 입력하세요.");
}

int main(){
	int player=0, computer=0;
	int num=0, i=0;
	srand((unsigned)time(NULL));
	
	menu();
	
	while(1){
		// ※ 요구사항 ※ 
		/*
		1. 전체적인 프로그램 로직은 다음 단계를 따른다.
			1-1. Menu()를 보여준다.
			1-2. 사용자가 1~3중 하나의 숫자를 입력하고 1부터 숫자개수만큼 세서 보여준다.
				ex) 사용자가 2를 입력하면 1 2 를 보여준다. 
			1-3. 컴퓨터가 랜덤으로 1~3중 하나의 숫자를 정하여 그만큼의 숫자를 세서 내보낸다.
				ex) 컴퓨터가 랜덤으로  3를 선정, 3 4 5를 내보낸다. 
			1-4. 1-2,3을 반복하여 숫자 31을 먼저 내보내는 사람이 지는 게임이다. 
		2. 사용자에게 수를 입력받을것.
			1-1. 입력받는 수는 1개~3개로 범위를 벗어나면 예외처리할 것.
		3. 컴퓨터의 랜덤숫자는 작성된 코드를 그대로 활용할 것. 
		4. 필요하다면 미리 선언되어있는 변수 외에 다른 변수를 활용하셔도 좋습니다. 
		*/ 
		
		printf("\n (사용자) 몇개의 수를 입력하겠습니까?\n");
		scanf("%d", &player);
		
		// 입력에 대한 예외처리부분 
		if(/* if문 조건 알잘딱 하세요 ^^7 */){
			printf("※ 1부터 3까지의 숫자만 입력하세요!\n\n");
			continue;
		}
		
		computer = (rand()%3 +1);
			
	}
	
	return 0; 
}
