//
//  main.c
//  1085
//
//  Created by Hongjun Yun on 2020-08-31.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int w,h,x,y;
    int d;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    d = (x > y) ? y : x;
    d = (d > (h - y)) ? (h - y) : d;
    d = (d > (w - x)) ? (w - x) : d;
    printf("%d",d);
    return 0;
}
