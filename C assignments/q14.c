
#include <stdio.h>
int main() {
    printf("Enter no of rows");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       int space=n-i;
       int num=2*i-1;
       for(int s=0;s<space;s++){
           printf(" ");
       }
       for(int st=1;st<=num;st++){
           printf("%d",st);
       }
        
        printf("\n");
    }

    return 0;
}