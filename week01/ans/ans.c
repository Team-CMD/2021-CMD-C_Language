# include <stdio.h>

int main(){
	/* Declaration Variable */
	int i;
	char str[7] = "";
	char checklist[7] = "";
	
	/* User data input parts */
	scanf("%s", &str);
	
	/* Copy to value for validation */
	for(i=0; i<7; i++){
		checklist[6-i] = str[i];
	}
	
	/* Validation Palindrome */
	for(i=0; i<7; i++){
		if(str[i] != checklist[i]){
			printf("this is not palindrome...\n");
			break;
		}
		else if(i==6){
			printf("this is palilndrome!!\n");
		}
	}
	
	return 0;
}
