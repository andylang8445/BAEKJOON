//
//  main.c
//  10996
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j+=2){
            printf("* ");
        }
        printf("\n");
        for(int j=1;j<n;j+=2){
            printf(" *");
        }
        if(n>1)
            printf("\n");
    }
    return 0;
}
