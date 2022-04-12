//
//  main.c
//  11399
//
//  Created by Hongjun Yun on 2022-04-12.
//

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(int argc, const char * argv[]) {
    int N, sum = 0;
    int arr[1001];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, N, sizeof(int), cmpfunc);
    for(int i=0;i<N;i++){
        sum += arr[i]*(N-i);
    }
    printf("%d",sum);
    return 0;
}
