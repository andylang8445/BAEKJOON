//
//  main.c
//  10250
//
//  Created by Hongjun Yun on 2020-08-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int H,W,N;
    int floor,row;
    scanf("%d",&num);
    for(;num>0;num--){
        scanf("%d %d %d",&H,&W,&N);
        if(N%H!=0){
            floor=N%H;
            row=N/H+1;
        }
        else{
            floor=H;
            row=N/H;
        }
        printf("%d%02d\n",floor,row);
    }
    return 0;
}
