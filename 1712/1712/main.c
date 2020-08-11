//
//  main.c
//  1712
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int A,B,C,n;
    scanf("%d %d %d",&A,&B,&C);
    if(C-B<=0){
        printf("-1");
        return 0;
    }
    n=(A/(C-B))+1;
    printf("%d",n);
    return 0;
}
