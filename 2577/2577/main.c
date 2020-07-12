//
//  main.c
//  2577
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int A,B,C,Res,numCnt[10];
    scanf("%d %d %d",&A,&B,&C);
    Res=(A*B*C);
    for(int i=0;i<10;i++){
        numCnt[i]=0;
    }
    while(Res>10){
        numCnt[(Res%10)]++;
        Res/=10;
    }
    numCnt[(Res)]++;
    for(int i=0;i<10;i++){
        printf("%d\n",numCnt[i]);
    }
    return 0;
}
