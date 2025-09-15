#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m=64;
        int space=n-i;
        int star=2*i-1;
        
        for(int s=0;s<space;s++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            int k=m+j;
            printf("%c",k);
            
        }
        printf("\n");
    }
   

    return 0;
}