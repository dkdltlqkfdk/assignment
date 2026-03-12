#include<stdio.h>
int main(){
    int i,j,h;
    for(i=0;i<5;i++){
        for(j=4-i;j>0;j--){
            printf("  ");
        }
        for(h=i+1;h>=1;h--){
            printf("%d ",h);
        }
        printf("\n");
    }
    return 0;
}