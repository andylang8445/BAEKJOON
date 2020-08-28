//
//  main.c
//  4948
//
//  Created by Hongjun Yun on 2020-08-28.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int arr[246916];

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
    filter2(246912);
    int input=-1;
    int cnt;
    while(1){
        cnt=0;
        scanf("%d",&input);
        if(input==0){
            break;
        }
        for(int i=(input+1);i<=(input*2);i++){
            if(arr[i]==0&&i!=1){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
