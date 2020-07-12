//
//  main.c
//  15596
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

long long sum(int *a, int n){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=*(a+i);
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int result;
    result=sum(arr,10);
    printf("%d",result);
    return 0;
}
