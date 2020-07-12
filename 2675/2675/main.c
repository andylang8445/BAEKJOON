//
//  main.c
//  2675
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t,r;
    char s[21];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %s",&r,s);
        for(int j=0;s[j]!=NULL;j++){
            for(int k=0;k<r;k++){
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
