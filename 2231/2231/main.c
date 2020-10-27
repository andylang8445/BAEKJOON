//
//  main.c
//  2231
//
//  Created by Hongjun Yun on 2020-10-26.
//

#include <stdio.h>

int digitSum(int n,int sum){
    if(n<10){
        sum+=n;
        return sum;
    }
    return digitSum((n/10), (sum+(n%10)));
}

int N;

int main(int argc, const char * argv[]) {
    scanf("%d",&N);
    for(int i=1;i<N;i++){
        int tmp=digitSum(i, 0)+i;
        if(tmp==N){
            printf("%d",i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
