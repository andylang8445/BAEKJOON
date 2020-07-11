//
//  main.c
//  10817
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        if(b>c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
    else if(b>c&&b>a){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else{
        if(b>a){
            printf("%d",b);
        }
        else{
            printf("%d",a);
        }
    }
    return 0;
}
