//
//  main.c
//  11729
//
//  Created by Hongjun Yun on 2020-09-02.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

void hanoi(int n, int from, int tmp, int to){
    if(n==1){
        printf("%d %d\n",from,to);
    }
    else{
        hanoi(n-1, from, to, tmp);
        printf("%d %d\n",from,to);
        hanoi(n-1, tmp, from, to);
    }
    return;
}

int main(int argc, const char * argv[]) {
    int n,k=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        k*=2;
    k-=1;
    printf("%d\n",k);
    hanoi(n, 1, 2, 3);
    
    return 0;
}
