//
//  main.c
//  3052
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tmp, save[10], cnt=0, chk=0;
    for(int i=0;i<10;i++){
        save[i]=0;
    }
    for(int i=0;i<10;i++){
        chk=0;
        scanf("%d",&tmp);
        tmp%=42;
        for(int j=0;j<cnt;j++){
            if(save[j]==tmp){
                chk=1;
                break;
            }
        }
        if(chk==0){
            save[cnt]=tmp;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
