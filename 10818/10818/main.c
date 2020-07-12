//
//  main.c
//  10818
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int max=-1000000,min=1000000;
    int n,tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        if(tmp>max)
            max=tmp;
        if(tmp<min)
            min=tmp;
    }
    printf("%d %d",min,max);
    return 0;
}
