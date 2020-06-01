//
//  main.c
//  10871
//
//  Created by Hongjun Yun on 2020-06-01.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x,tmp;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        if(tmp<x)
            printf("%d ",tmp);
    }
    return 0;
}
