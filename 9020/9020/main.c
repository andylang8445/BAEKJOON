//
//  main.c
//  9020
//
//  Created by Hongjun Yun on 2020-08-30.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int arr[10008];

void filter2(int end){
    for(int i=2;i<end;i++){
        if(arr[i]==0){
            for(int j=2;j<=(end/i);j++){
                if(j<10008){
                    arr[i*j]++;
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int n,tmp;
    int n1,n2,d;
    filter2(10000);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        for(int j=(tmp/2);j<=(tmp);j++){
            if(arr[(tmp-j)]==0&&arr[j]==0){
                n1=tmp-j;
                n2=j;
                break;
            }
        }
        printf("%d %d\n",n1,n2);
    }
    return 0;
}
