//
//  main.c
//  4344
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int C,N,arr[1000];
    double ave=0.0,percentage;
    scanf("%d",&C);
    for(int i=0;i<C;i++){
        ave=percentage=0;
        scanf("%d",&N);
        for(int j=0;j<N;j++){
            scanf("%d",&arr[j]);
            ave+=arr[j];
        }
        ave/=(double)N;
        for(int j=0;j<N;j++){
            if(arr[j]>ave){
                percentage++;
            }
        }
        percentage/=(double)N;
        percentage*=(double)100.0;
        printf("%.3lf%%\n",percentage);
    }
    return 0;
}
