//
//  main.c
//  1157
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int cnt[26],maxCnt=0,max=-1;
    int save;
    char arr[1000000];
    
    for(int i=0;i<26;i++)
        cnt[i]=0;
    
    scanf("%s",arr);
    for(int i=0;arr[i]!=NULL;i++){
        if(arr[i]>='A'&&arr[i]<='Z'){
            cnt[arr[i]-'A']++;
        }
        else{
            cnt[arr[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>max){
            max=cnt[i];
            maxCnt=1;
            save=i;
        }
        else if(cnt[i]==max){
            maxCnt++;
        }
    }
    if(maxCnt>1){
        printf("?");
    }
    else{
        printf("%c",(save+'A'));
    }
    return 0;
}
