//
//  main.c
//  10039
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0,tmp;
    for(int i=0;i<5;i++){
        scanf("%d",&tmp);
        if(tmp<40)
            tmp=40;
        sum+=tmp;
    }
    printf("%d",(sum/5));
    return 0;
}
