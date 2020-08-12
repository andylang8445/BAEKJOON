//
//  main.c
//  2775
//
//  Created by Hongjun Yun on 2020-08-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int function(int n,int m){
    if(m==1){
        return 1;
    }
    if(n==0){
        return m;
    }
    return (function(n-1, m)+function(n, m-1));
}

int main(int argc, const char * argv[]) {
    int t,k,n,result;
    scanf("%d",&t);
    for(;t>0;t--){
        scanf("%d %d",&k,&n);
        result=function(k, n);
        printf("%d\n",result);
    }
    return 0;
}
