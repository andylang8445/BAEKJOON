//
//  main.c
//  1110
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cnt=0;
    int a,b,c,num,original;
    scanf("%d",&original);
    num=original;
    do{
        cnt++;
        a=num/10;
        b=num%10;
        c=a+b;
        c%=10;
        num=(b*10)+c;
    }while(original!=num);
    printf("%d",cnt);
    return 0;
}
