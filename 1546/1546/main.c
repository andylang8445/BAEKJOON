//
//  main.c
//  1546
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,arr[1000],max=0;
    double sum=0.0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=(((double)arr[i]/(double)max)*100);
    }
    printf("%lf",((double)sum/(double)n));
    return 0;
}
