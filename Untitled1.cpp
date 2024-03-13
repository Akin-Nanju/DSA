// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int n;
    printf("ENTER THE NO YOU WANT : ");
    scanf("%d",&n);
    // ptr = (int*)malloc(n * sizeof(int));
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr == NULL){
        printf("ERROR");
    }
    else{
        printf("CONGRATULATION MEMORY HAS BEEN ALLOCATED:\n");
        for(int i = 0; i<5; i++){
            printf("ENTER THE NUMBER: \n");
            scanf("%d",&ptr[i]);
        }
        printf("YOUR ENTERD NO ARE: \n");
        for(int i = 0; i<5;i++){
          
            printf("%d\n",ptr[i]);
        }
    }

    return 0;
}
