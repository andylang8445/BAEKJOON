//
//  main.c
//  4673
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int arr[10000];

int d(int num){
    int sum=0,n;
    int chk=0;
    for(int i=1;i<num;i++){
        sum=i;
        n=i;
        while(n>=10){
            sum+=(n%10);
            n/=10;
            //printf("\t\tn: %d,sum: %d\n",n,sum);
        }
        sum+=n;
        //printf("\ti: %d, sum: %d\n",i,sum);
        if(sum==num){
            chk=1;
        }
    }
    return chk;
}

int main(int argc, const char * argv[]) {
    int num,sum;
    for(int i=1;i<=10000;i++){
        if(d(i)==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
