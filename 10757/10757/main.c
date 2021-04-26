//
//  main.c
//  10757
//
//  Created by Hongjun Yun on 2021-04-26.
//

#include <stdio.h>

int A[10000], B[10000];
int result[10001], roundUp=0;
int ADigit=0, BDigit=0, RDigit=0;

int main(int argc, const char * argv[]) {
    char tmp='0';
    
    for(int i=0;i<10000;i++){
        A[i]=B[i]=result[i]=0;
    }
    result[10000]=0;
    
    for(ADigit=0;tmp>='0'&&tmp<='9';ADigit++){
        scanf("%c",&tmp);
        if(tmp!=' '){
            A[ADigit]=tmp-'0';
        }
    }
    tmp='0';
    for(BDigit=0;tmp>='0'&&tmp<='9';BDigit++){
        scanf("%c",&tmp);
        B[BDigit]=tmp-'0';
    }
    
    ADigit--;
    BDigit--;
    
    if(ADigit>BDigit){
        RDigit=ADigit+1;
    }
    else{
        RDigit=BDigit+1;
    }
    /*for(int i=ADigit-1;i>=0;i--){
        printf("%d ",A[i]);
    }
    printf("\n");
    for(int i=BDigit-1;i>=0;i--){
        printf("%d ",B[i]);
    }*/
    
    for(int i=ADigit-1;i>=0;i--){
        result[ADigit-1-i]=A[i];
    }
    for(int i=BDigit-1;i>=0;i--){
        result[BDigit-1-i]+=B[i];
    }
    
    /*printf("\n");
    for(int i=0;i<RDigit;i++){
        printf("%d ",result[i]);
    }*/
    for(int i=0;i<RDigit;i++){
        if(roundUp>0){
            result[i]+=roundUp;
            roundUp=0;
        }
        if(result[i]/10>0){
            roundUp=result[i]/10;
            result[i]%=10;
        }
    }
    if(result[RDigit-1]==0){
        RDigit--;
    }
    //printf("\n");
    for(int i=RDigit-1;i>=0;i--){
        printf("%d",result[i]);
    }
    return 0;
}
