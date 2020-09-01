//
//  main.c
//  4153
//
//  Created by Hongjun Yun on 2020-08-31.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input[3];
    int tmp;
    while(1){
        scanf("%d %d %d",&input[0],&input[1],&input[2]);
        if((input[0]+input[1]+input[2])==0){
            break;
        }
        for(int i=0;i<2;i++){
            for(int j=i+1;j<3;j++){
                if(input[i]>input[j]){
                    tmp=input[i];
                    input[i]=input[j];
                    input[j]=tmp;
                }
            }
        }
        if(((input[0]*input[0])+(input[1]*input[1]))==(input[2]*input[2])){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}
