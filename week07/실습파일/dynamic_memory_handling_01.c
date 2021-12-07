# include <stdio.h>
# include <stdlib.h>

int main(){
	int size, i;
	scanf("%d", &size);
	
	int *arr = (int*)malloc(sizeof(int)*size);
	
	for(i=0; i<size; i++){
		scanf("%d", *arr[i]);
	}
	
	for(i=0; i<size; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	free(arr);
	
	return 0;
}
