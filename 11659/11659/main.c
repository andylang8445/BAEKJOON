//
//  main.c
//  11659
//
//  Created by Hongjun Yun on 2022-05-02.
//

#include <stdio.h>

int N, M;
int arr[100000];
int save[3][100000];

int main(int argc, const char * argv[]) {
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<M;i++){
        int start, end, sum = 0;
        scanf("%d %d",&start, &end);
        for(int j=start-1;j<end;j++)
            sum+=arr[j];
        printf("%d\n",sum);
    }
    return 0;
}
