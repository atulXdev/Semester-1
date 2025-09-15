#include <stdio.h>

int main() {
    printf("Enter no of rows");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int c =64;
        for(int j=1;j<=n;j++){
            int m=c+j;
            printf("%c",m);
        }
        printf("\n");
    }

    return 0;
}