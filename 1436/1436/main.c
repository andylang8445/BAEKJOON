//
//  main.c
//  1436
//
//  Created by Hongjun Yun on 2020-10-27.
//

#include <stdio.h>

int digitBreakChk666(int num){
    while(num){
        if(num%1000==666)
            return 3;
        num/=10;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int N, cnt=0;
    scanf("%d",&N);
    for(int i=665;i<10000666;i++){
        if(digitBreakChk666(i)==3){
            cnt++;
        }
        if(cnt==N){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
