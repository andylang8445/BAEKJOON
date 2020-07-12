//
//  main.c
//  1065
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int check(int n){
    int arr[4],digit=0,diff,chk=1,num=n;
    if(n<10)
        return 1;
    do{
        arr[digit]=num%10;
        num/=10;
        digit++;
    }while(num>=10);
    arr[digit]=num%10;
    digit++;
    /*printf("\t");
    for(int i=digit-1;i>=0;i--){
        printf("%d, ",arr[i]);
    }
    printf("\n");*/
    diff=arr[0]-arr[1];
    for(int i=0;i<digit-1;i++){
        if(arr[i]-arr[i+1]!=diff)
            chk=0;
    }
    return chk;
}

int main(int argc, const char * argv[]) {
    int num,cnt=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(check(i)==1)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
