//
//  main.c
//  3009
//
//  Created by Hongjun Yun on 2020-08-31.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x[2],y[2];
    int xCnt[2],yCnt[2];
    int xIn,yIn;
    for(int i=0;i<2;i++){
        x[i]=y[i]=xCnt[i]=yCnt[i]=0;
    }
    for(int i=0;i<3;i++){
        scanf("%d %d",&xIn,&yIn);
        if(i==0){
            xCnt[0]=yCnt[0]=1;
            x[0]=xIn;
        }
        else if(x[0]==xIn){
            xCnt[0]++;
        }
        else{
            x[1]=xIn;
            xCnt[1]++;
        }
        
        if(i==0){
            y[0]=yIn;
        }
        else if(y[0]==yIn){
            yCnt[0]++;
        }
        else{
            y[1]=yIn;
            yCnt[1]++;
        }
    }
    if(xCnt[0]==2){
        printf("%d ",x[1]);
    }
    else{
        printf("%d ",x[0]);
    }
    if(yCnt[0]==2){
        printf("%d",y[1]);
    }
    else{
        printf("%d",y[0]);
    }
    
    return 0;
}
