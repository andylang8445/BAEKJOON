//
//  main.c
//  1316
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>
int alpha[26];
void initialize(){
    for(int i=0;i<26;i++)
        alpha[i]=0;
}

int main(int argc, const char * argv[]) {
    char input[101],lastvisit;
    int n,cnt;
    scanf("%d",&n);
    cnt=n;
    for(;n>0;n--){
        scanf(" %s",input);
        initialize();
        lastvisit=input[0];
        for(int i=0;input[i]!='\0';i++){
            if(alpha[input[i]-'a']>0&&lastvisit!=input[i]){
                cnt--;
                break;
            }
            alpha[input[i]-'a']++;
            lastvisit=input[i];
        }
    }
    printf("%d",cnt);
    return 0;
}
