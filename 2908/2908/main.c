//
//  main.c
//  2908
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    int aFlip=0, bFlip=0;
    scanf("%d %d",&a,&b);
    for(int i=0;i<3;i++){
        aFlip*=10;
        aFlip+=a%10;
        a/=10;
    }
    for(int i=0;i<3;i++){
        bFlip*=10;
        bFlip+=b%10;
        b/=10;
    }
    if(aFlip>bFlip){
        printf("%d",aFlip);
    }
    else{
        printf("%d",bFlip);
    }
    return 0;
}
