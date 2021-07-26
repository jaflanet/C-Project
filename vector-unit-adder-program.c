#include <stdio.h>
#include <stdlib.h>

void hasil(int *a,int*b,int n,int *sum){
    int i;
    int temp=0;
    for(i = 0; i < n; i++){
		temp += (*(a + i))*(*(b + i)); 
	}
    *sum=temp;
}
int main() {
    int i,*v1,*v2;
    int sum=0;
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n<2){
        return main();
    }
    printf("\nyou must input %d element in each vector",n);
    v1 = (int*) malloc(n * sizeof(int)); 
    v2 = (int*) malloc(n * sizeof(int)); 
    if(v1 == NULL || v2 == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("\ninput the element of the first vector\n");
    for(i = 0; i < n; ++i) {
        printf("Enter element-%d>>",i+1);
        scanf("%d", v1 + i);
        }
    
    printf("\ninput the element of the second vector\n");
     for(i = 0; i < n; ++i) {
        printf("Enter element-%d>>",i+1);
        scanf("%d", v2 + i);
        }
    hasil(v1,v2,n,&sum);

	printf("\n2 vector multiplication results is >> %d", sum);
	free(v1);
	free(v2);
    return 0;
}