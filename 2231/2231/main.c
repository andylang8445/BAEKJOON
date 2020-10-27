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
    printf("%d",digitSum(2340, 0));
    return 0;
}
