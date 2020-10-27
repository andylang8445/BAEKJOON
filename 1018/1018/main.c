//
//  main.c
//  1018
//
//  Created by Hongjun Yun on 2020-10-26.
//

#include <stdio.h>

int map[51][51];//0: black, 1: white
char input[51][51];
int sample1[8][8], sample2[8][8];
int N,M;
int minimum;

void initialize(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(i%2==0){
                if(j%2==0){
                    sample1[i-1][j-1]=1;
                    sample2[i-1][j-1]=0;
                }
                else if(j%2==1){
                    sample1[i-1][j-1]=0;
                    sample2[i-1][j-1]=1;
                }
            }
            else{
                if(j%2==0){
                    sample1[i-1][j-1]=0;
                    sample2[i-1][j-1]=1;
                }
                else if(j%2==1){
                    sample1[i-1][j-1]=1;
                    sample2[i-1][j-1]=0;
                }
            }
        }
    }
    /*printf("\n\n");
    for(int i=0;i<8;i++){
        printf("\t");
        for(int j=0;j<8;j++){
            printf("%d",sample1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    for(int i=0;i<8;i++){
        printf("\t");
        for(int j=0;j<8;j++){
            printf("%d",sample2[i][j]);
        }
        printf("\n");
    }*/
    minimum=N*M;
}

int mapCmp(int x,int y){
    int cnt1=0,cnt2=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if((map[x+i][y+j])!=sample1[i][j]){
                cnt1++;
            }
            else if((map[x+i][y+j])!=sample2[i][j]){
                cnt2++;
            }
            
        }
    }
    
    
    /*for(int i=0;i<8;i++){
        printf("\t\t");
        for(int j=0;j<8;j++){
            printf("%d",map[x+i][y+j]);
        }
        printf("\n");
    }
    printf("\n");*/
    
    if(cnt1>cnt2){
        return cnt2;
    }
    else{
        return cnt1;
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf(" %c",&input[i][j]);
            if(input[i][j]=='B'){
                map[i][j]=0;
            }
            else if(input[i][j]=='W'){
                map[i][j]=1;
            }
        }
    }
    initialize();
    
    if(N==M&&N==8){
        minimum=mapCmp(0, 0);
    }
    else if(N==8){
        for(int j=0;j<=(M-8);j++){
            int tmp=mapCmp(0, j);
            if(minimum>tmp){
                minimum=tmp;
            }
        }
    }
    else if(M==8){
        for(int j=0;j<=(M-8);j++){
            int tmp=mapCmp(j, 0);
            if(minimum>tmp){
                minimum=tmp;
            }
        }
    }
    
    else{
        for(int i=0;i<=(N-8);i++){
            for(int j=0;j<=(M-8);j++){
                int tmp=mapCmp(i, j);
                if(minimum>tmp){
                    minimum=tmp;
                }
            }
        }
    }
    
    printf("%d",minimum);
    return 0;
}
