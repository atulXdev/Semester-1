#include <stdio.h>
int main() {
    printf("Enter no of rows");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       int space=n-i;
       int star=2*i-1;
       for(int s=0;s<space;s++){
           printf(" ");
       }
       for(int st=0;st<star;st++){
           printf("*");
       }
        
        printf("\n");
    }

    return 0;
}