//
//  main.c
//  1193
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int sum(int n){
    return ((n-1)*n/2);
}

int main(int argc, const char * argv[]) {
    int a=1,b=1,input,n=1;
    scanf("%d",&input);
    while(1){
        /*printf("n: %d\n",n);
        printf("\tsum(n): %d, sum(n+1):%d\n",sum(n),sum(n+1));*/
        if(sum(n)<input&&input<=sum(n+1)){
            int t=sum(n+1)-input;
            if(n%2==0){
                b=1+t;
                a=n-t;
            }
            else{
                a=1+t;
                b=n-t;
            }
            break;
        }
        n++;
    }
    printf("%d/%d",a,b);
    return 0;
}
