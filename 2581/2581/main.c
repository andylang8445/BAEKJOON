//
//  main.c
//  2581
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
    int n,m;
    int sum=0,cnt=0,min=0,tmp;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        tmp=primeChk(i);
        if(tmp==1&&min==0){
            min=i;
        }
        if(tmp==1)
            sum+=i;
        cnt+=tmp;
    }
    if(cnt==0){
        printf("-1");
    }
    else{
        printf("%d\n%d",sum,min);
    }
    return 0;
}
