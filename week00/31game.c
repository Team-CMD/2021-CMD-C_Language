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
		printf("\n (사용자) 몇개의 수를 입력하겠습니까?\n");
		scanf("%d", &player);
		
		if(player >3 || player <=0){
			printf("※ 1부터 3까지의 숫자만 입력하세요!\n\n");
			continue;
		}
		
		for(i=1; i<=player; i++){
			num++;
			if(num<=31){
				printf("%d ", num);
			}
		}
		if(num>=31){
			printf("\n ★★★ 컴퓨터의 승리! ★★★\n");
			break;
		}
		
		computer = (rand()%3 +1);
		printf("\n(컴퓨터) : %d\n", computer);
			
		for(i=0; i<computer; i++){
			num++;
			if(num<=31){
				printf("%d ", num);
			}
		}
		
		if(num>=31){
				printf("\n ★★★ 사용자의 승리! ★★★\n");
				break;
		}	
	}
	
	return 0; 
}
