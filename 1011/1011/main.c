//
//  main.c
//  1011
//
//  Created by Hongjun Yun on 2020-08-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int minCnt=2100000000;

int sumUntilN(int num){
    int result;
    result=(num-1)*num;
    result/=2;
    return result;
}

int findMaximum(int remainingDistance){
    int result=1,tmp;
    for(int i=1;i<=remainingDistance;i++){
        tmp=sumUntilN(i)+sumUntilN(i-1);
        if(tmp<=remainingDistance){
            result=i;
        }
    }
    return result;
}

void findPath(int distance,int max, int cnt){
    if(distance==0){
        if(minCnt>cnt){
            minCnt=cnt;
        }
        return;
    }
    else if(distance<0){
        return;
    }
    for(int i=1;i<=max;i++){
        findPath(distance-i, max, cnt+1);
    }
}

int main(int argc, const char * argv[]) {
    int t,x,y,remainingDistance,cnt=0,tmp;
    scanf("%d",&t);
    for(;t>0;t--){
        scanf("%d %d",&x,&y);
        remainingDistance=y-x;
        cnt=0;
        tmp=findMaximum(remainingDistance);
        cnt=2*tmp-1;
        remainingDistance-=(sumUntilN(tmp)+sumUntilN(tmp-1));
        findPath(remainingDistance, tmp, 0);
        cnt+=minCnt;
        printf("%d\n",cnt);
    }
    return 0;
}
