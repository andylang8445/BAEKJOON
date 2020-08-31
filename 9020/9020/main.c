//
//  main.c
//  9020
//
//  Created by Hongjun Yun on 2020-08-30.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

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
    int chk=0;
    filter2(10000);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        for(int j=2;j<=(tmp/2);j++){
            if(arr[j]==0){
                for(int k=j;k<=tmp;k++){
                    if(arr[k]==0){
                        if((j+k)==tmp){
                            printf("%d %d\n",j,k);
                            chk=1;
                            break;
                        }
                    }
                }
            }
            if(chk==1){
                break;
            }
        }
        chk=0;
    }
    return 0;
}
