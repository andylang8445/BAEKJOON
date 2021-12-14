//
//  main.c
//  1181
//
//  Created by Hongjun Yun on 2021-12-14.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char arr[20001][51];
int len[20001];
int n=0;

bool isIdentical(int a, int b){
    if(len[a]!=len[b])
        return false;
    for(int i=0;i<len[a];i++){
        if(arr[a][i]!=arr[b][i])
            return false;
    }
    return true;
}

void swap(int a, int b){
    char tmp[51];
    strcpy(tmp,arr[a]);
    strcpy(arr[a],arr[b]);
    strcpy(arr[b],tmp);
    int tmpp=len[a];
    len[a]=len[b];
    len[b]=tmpp;
}

int main(int argc, const char * argv[]) {
    for(int i=0;i<20001;i++){
        for(int j=0;j<51;j++){
            arr[i][j]='\0';
            len[j]=0;
        }
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
        len[i]=0;
        for(len[i]=0;arr[i][len[i]]!='\0';len[i]++);
        for(int j=0;j<i;j++){
            if(isIdentical(i, j)){
                i--;
                n--;
            }
        }
    }
    // 중복 체크 완료
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(len[j]<len[i]){
                swap(i, j);
            }
            else if(len[i]==len[j]){
                if(strcmp(arr[i], arr[j])>0){
                    swap(i, j);
                }
            }
        }
    }
    
    
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}
