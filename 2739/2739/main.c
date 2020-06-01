//
//  main.c
//  2739
//
//  Created by Hongjun Yun on 2020-06-01.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=9;i++)
        printf("%d * %d = %d\n",n,i,n*i);
    return 0;
}
