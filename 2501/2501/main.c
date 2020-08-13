//
//  main.c
//  2501
//
//  Created by Hongjun Yun on 2020-08-13.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k,cnt=0,res=-1;
    scanf("%d %d",&n,&k);
    for (int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
            if(cnt==k){
                res=i;
                break;
            }
        }
    }
    if(res==-1){
        res=0;
    }
    printf("%d",res);
    return 0;
}
