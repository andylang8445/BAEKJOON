//
//  main.c
//  11051
//
//  Created by Hongjun Yun on 2022-04-14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, K;
    long long int res = 1, den = 1, resu;
    scanf("%d %d",&N,&K);
    for(int i=K+1;i<=N;i++){
        res *= i;
        res%=10007;
    }
    for(int i=2;i<=(N-K);i++){
        den *= i;
        den%=10007;
    }
    resu = res/den;
    printf("%lld",(res/den)%10007);
    return 0;
}
