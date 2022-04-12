//
//  main.c
//  1037
//
//  Created by Hongjun Yun on 2022-04-12.
//

#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    int N;
    int arr[50];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    if(N%2==0){
        printf("%d",(arr[0]*arr[N-1]));
    }
    else{
        printf("%d",(arr[N/2]*arr[N/2]));
    }
    return 0;
}
