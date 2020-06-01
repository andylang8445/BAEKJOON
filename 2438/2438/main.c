//
//  main.c
//  2438
//
//  Created by Hongjun Yun on 2020-06-01.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for(int j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
