//
//  main.c
//  1018-2
//
//  Created by Hongjun Yun on 2020-10-27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char board[50][50];
    
    int N,M;
    int min=64;
    int cnt1=0,cnt2=0;
    
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%s",board[i]);
    }
    
    for(int i=0;i<=(N-8);i++){
        for(int j=0;j<=(M-8);j++){
            cnt1=cnt2=0;
            for(int k=i;k<(i+8);k++){
                for(int l=j;l<(j+8);l++){
                    if((k+l)%2==0){
                        if(board[k][l]=='B'){
                            cnt2++;
                        }
                        else{
                            cnt1++;
                        }
                    }
                    else{
                        if(board[k][l]=='B'){
                            cnt1++;
                        }
                        else{
                            cnt2++;
                        }
                    }
                }
            }
            if(cnt1<cnt2){
                if(cnt1<min)
                    min=cnt1;
            }
            else if(cnt2<min)
                min=cnt2;
        }
    }
    printf("%d\n",min);
    return 0;
}
