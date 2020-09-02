//
//  main.c
//  10870
//
//  Created by Hongjun Yun on 2020-09-02.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int function(int current, int pprev, int prev, int end){
    if(current>end){
        return prev;
    }
    return function((current+1),prev,(pprev+prev),end);
}

int main(int argc, const char * argv[]) {
    int input;
    scanf("%d",&input);
    if(input==0){
        printf("0");
    }
    else if(input==1){
        printf("1");
    }
    else{
        printf("%d",function(2, 0, 1, input));
    }
    return 0;
}
