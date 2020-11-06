//
//  main.c
//  10989
//
//  Created by Hongjun Yun on 2020-11-05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, arr[10001];
    for(int i=0;i<10001;i++){
        arr[i]=0;
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);
        arr[tmp]++;
    }
    for(int i=0;i<10001;i++){
        if(arr[i]>0){
            for(int j=0;j<arr[i];j++){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
