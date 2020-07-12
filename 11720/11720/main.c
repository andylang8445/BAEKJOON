//
//  main.c
//  11720
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,sum=0;
    char a;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&a);
        sum+=(a-'0');
    }
    printf("%d",sum);
    return 0;
}
