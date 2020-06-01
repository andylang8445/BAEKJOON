//
//  main.c
//  11021
//
//  Created by Hongjun Yun on 2020-06-01.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i,a+b);
    }
    return 0;
}
