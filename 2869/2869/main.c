//
//  main.c
//  2869
//
//  Created by Hongjun Yun on 2020-08-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,v;
    int n;
    scanf("%d %d %d",&a,&b,&v);
    n=(v-b)/(a-b);
    if((a-b)*n+b<v){
        n++;
    }
    printf("%d",n);
    return 0;
}
