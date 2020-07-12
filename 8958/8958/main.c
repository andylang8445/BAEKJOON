//
//  main.c
//  8958
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int sum,cnt;
    char arr[81];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum=cnt=0;
        scanf("%s",arr);
        for(int j=0;arr[j]!=NULL;j++){
            if(arr[j]=='O'){
                cnt++;
                sum+=cnt;
            }
            else{
                cnt=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
