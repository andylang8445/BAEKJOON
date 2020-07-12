//
//  main.c
//  2562
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tmp, num=0;
    int max=-1;
    for(int i=0;i<9;i++){
        scanf("%d",&tmp);
        if(tmp>max){
            max=tmp;
            num=i+1;
        }
    }
    printf("%d\n%d",max,num);
    return 0;
}
