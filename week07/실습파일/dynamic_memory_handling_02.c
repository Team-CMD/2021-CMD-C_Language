# include <stdio.h>
# include <stdlib.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int *arr = (int*)calloc(n, sizeof(int));
	printf("calloc 0으로 초기화\n");
	
	for(i=0; i<n; i++){
		printf("arr[%d] = %d ", i, arr[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	free(arr);
	return 0;
}
