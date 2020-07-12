//
//  main.c
//  10809
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cnt[26];
    char s[101];
    for(int i=0;i<26;i++)
        cnt[i]=-1;
    scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++){
        if(cnt[s[i]-'a']==-1){
            cnt[s[i]-'a']=i;
        }
    }
    for(int i=0;i<26;i++){
        printf("%d ",cnt[i]);
    }
    return 0;
}
