//
//  main.c
//  Baekjoon 10952
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
            break;
        printf("%d\n",(a+b));
    }
    return 0;
}
