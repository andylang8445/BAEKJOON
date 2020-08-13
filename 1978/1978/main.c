//
//  main.c
//  1978
//
//  Created by Hongjun Yun on 2020-08-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int primeChk(int num){
    if(num==1||num==0)
        return 0;
    int end=sqrt(num);
    int cnt=0;
    for(int i=2;i<=end;i++){
        if(num%i==0){
            cnt++;
        }
    }
    if(cnt==0){
        return 1;
    }
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    int n,num,cnt=0;
    scanf("%d",&n);
    for(;n>0;n--){
        scanf("%d",&num);
        cnt+=primeChk(num);
    }
    printf("%d",cnt);
    return 0;
}
