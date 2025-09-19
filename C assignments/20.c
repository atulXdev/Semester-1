#include <stdio.h>
int main() {
    int n;
    printf("input a num");
    scanf("%d",&n);
    int m=64;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            c++;
            int k=m+c;
            printf("%c ",k);
            
        }
        printf("\n");
    }

    return 0;
}