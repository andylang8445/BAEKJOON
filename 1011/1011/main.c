//
//  main.c
//  1011
//
//  Created by Hongjun Yun on 2020-08-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

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

long findPath(int distance,int max, int cnt){
    if(distance==0){
        
    }
    else if(distance<0){
        return 99999999999;
    }
    for(int i=1;i<=max;i++){
        
    }
}

int main(int argc, const char * argv[]) {
    int t,x,y,remainingDistance,cnt=0;
    scanf("%d",&t);
    for(;t>0;t--){
        scanf("%d %d",&x,&y);
        remainingDistance=y-x;
        cnt=0;
    }
    return 0;
}
