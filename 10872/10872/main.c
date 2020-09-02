//
//  main.c
//  10872
//
//  Created by Hongjun Yun on 2020-09-02.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>
int function(int current, int end){
    if(current>end)
        return 1;
    return current*function(current+1, end);
}

int main(int argc, const char * argv[]) {
    int input;
    scanf("%d",&input);
    printf("%d",function(1, input));
    return 0;
}
