# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void menu(){
	printf("------------------------------\n");
	printf("|    ����Ų ��� 31 Game    |\n");
	printf("------------------------------\n\n");
	printf("GAME START!");
	printf("�� 1���� 3������ ���� �Է��ϼ���.");
}

int main(){
	int player=0, computer=0;
	int num=0, i=0;
	srand((unsigned)time(NULL));
	
	menu();
	
	while(1){
		printf("\n (�����) ��� ���� �Է��ϰڽ��ϱ�?\n");
		scanf("%d", &player);
		
		if(player >3 || player <=0){
			printf("�� 1���� 3������ ���ڸ� �Է��ϼ���!\n\n");
			continue;
		}
		
		for(i=1; i<=player; i++){
			num++;
			if(num<=31){
				printf("%d ", num);
			}
		}
		if(num>=31){
			printf("\n �ڡڡ� ��ǻ���� �¸�! �ڡڡ�\n");
			break;
		}
		
		computer = (rand()%3 +1);
		printf("\n(��ǻ��) : %d\n", computer);
			
		for(i=0; i<computer; i++){
			num++;
			if(num<=31){
				printf("%d ", num);
			}
		}
		
		if(num>=31){
				printf("\n �ڡڡ� ������� �¸�! �ڡڡ�\n");
				break;
		}	
	}
	
	return 0; 
}
