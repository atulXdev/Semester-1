#include <stdio.h>
int main() {
    printf("Enter no of rows");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int c=0;
   
      
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                c++;
                printf(" ");
            }
            else{
                printf("%d",j-c);
            }
          
          
          
        }
        printf("\n");
    }

    return 0;
}