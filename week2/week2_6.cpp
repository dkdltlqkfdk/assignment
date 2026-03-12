#include<stdio.h>
int main(){
    int i,j,h,k;
    for(i=0;i<5;i++){
        for(j=4-i;j>0;j--){
            printf("  ");
        }
        for(h=i+1;h>=1;h--){
            printf("%d ",h);
        }
        for(k=2;k<=i+1;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}