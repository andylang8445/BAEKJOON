//
//  main.c
//  11050
//
//  Created by Hongjun Yun on 2022-04-14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, K;
    int res = 1;
    int den = 1;
    scanf("%d %d",&N,&K);
    for(int i=2;i<=N;i++){
        res *= i;
    }
    for(int i=2;i<=(N-K);i++){
        den *= i;
    }
    for(int i=2;i<=K;i++){
        den *= i;
    }
    printf("%d",res/den);
    return 0;
}
