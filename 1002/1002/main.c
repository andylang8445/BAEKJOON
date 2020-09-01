//
//  main.c
//  1002
//
//  Created by Hongjun Yun on 2020-09-01.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int x1,x2,y1,y2,r1,r2;
    int cnt;
    double d;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        d=sqrt((double)(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))));
        if(x1==x2&&y1==y2&&r1==r2){
            printf("-1\n");
            continue;
        }
        else if(d==(double)(r1+r2)||d==(double)abs(r1-r2)){
            printf("1\n");
        }
        else if((d>abs(r2-r1))&&d<(r1+r2)){
            printf("2\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}
