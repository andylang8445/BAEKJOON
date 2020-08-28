//
//  main.c
//  4948
//
//  Created by Hongjun Yun on 2020-08-28.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int arr[1000008];

void filterPrime(int start, int end){
    for(int i=start;i<=end;i++){
        //printf("\n\t%d: ",i);
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                arr[i]++;
                //printf("%d, ",j);
            }
        }
    }
}

void filter2(int end){
    for(int i=2;i<end;i++){
        if(arr[i]==0){
            for(int j=2;j<=(end/i);j++){
                if(j<1000008){
                    arr[i*j]++;
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=1000000;i++){
        arr[i]=0;
    }
    filter2(n);
    //filterPrime(m, n);
    for(int i=m;i<=n;i++){
        if(arr[i]==0&&i!=1){
            printf("%d\n",i);
        }
    }
    return 0;
}
