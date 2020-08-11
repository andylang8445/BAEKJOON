//
//  main.c
//  2292
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    int n=1;
    scanf("%d",&input);
    while(1){
        if((1+((n*(n-1))/2)*6)>=input){
            break;
        }
        n++;
    }
    printf("%d",n);
    return 0;
}
