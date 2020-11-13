//
//  main.c
//  1427
//
//  Created by Hongjun Yun on 2020-11-13.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10], N, cnt = 0;
    for(int i=0;i<10;i++){
        arr[i]=10;
    }
    scanf("%d",&N);
    while(N>=10){
        arr[cnt++]=N%10;
        N/=10;
    }
    arr[cnt++]=N;
    for(int i=0;i<cnt-1;i++){
        for(int j=i+1;j<cnt;j++){
            if(arr[i]<arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=0;i<cnt;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
