# include <stdio.h>
# include <stdlib.h>

int main(){
	int n, m, i;
	
	printf("ó�� ũ�� �Է�\n");
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	
	printf("�ٽ� �Ҵ�� ũ�� �Է�\n");
	scanf("%d", &m);
	
	arr = (int*)realloc(arr, sizeof(int)*m);
	
	for(i=n; i<m; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<m; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	
	free(arr);
	return 0;
}
