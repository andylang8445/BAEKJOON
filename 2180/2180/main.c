//
//  main.c
//  2180
//
//  Created by Hongjun Yun on 2020-11-05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, arr[4000], sum=0;
    for(int i=0;i<4000;i++){
        arr[i]=0;
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);
        arr[tmp-1]++;
        sum+=tmp;
    }
    printf("%.0f\n",(double)(sum/N));
    return 0;
}
