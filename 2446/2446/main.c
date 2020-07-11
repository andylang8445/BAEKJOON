//
//  main.c
//  2446
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=(n-1);i>=0;i--){
        for(int j=(n-1);j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=(i*2);j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=(n-1);i++){
        for(int j=(n-1);j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=(i*2);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
