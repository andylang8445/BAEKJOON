//
//  main.c
//  10814
//
//  Created by Hongjun Yun on 2021-12-15.
//

#include <stdio.h>
#include <string.h>

int N, age[100000], reg[100000];
char name[100000][100];

void swap(int a, int b){
    int tmp;
    char ttmp[100];
    strcpy(ttmp, name[a]);
    strcpy(name[a], name[b]);
    strcpy(name[b], ttmp);
    tmp=age[a];
    age[a]=age[b];
    age[b]=tmp;
    tmp=reg[a];
    reg[a]=reg[b];
    reg[b]=tmp;
}

int main(int argc, const char * argv[]) {
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %s",&age[i],name[i]);
        reg[i]=i;
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if((age[j]<age[i])||(age[i]==age[j]&&reg[j]<reg[i])){
                swap(i, j);
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%d %s\n",age[i],name[i]);
    }
    return 0;
}
