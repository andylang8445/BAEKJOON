//
//  main.c
//  2447
//
//  Created by Hongjun Yun on 2020-09-02.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int arr[2188][2188];

void initialize(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            arr[i][j]=' ';
    }
}

void function(int coorx, int coory, int size){
    if(size==1){
        arr[coorx][coory]='*';
        return;
    }
    
    int m=size/3;
    int cnt=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cnt++;
            if(cnt!=5)
                function(coorx+i*m, coory+j*m, m);
        }
    }
}

int main(int argc, const char * argv[]) {
    int input;
    scanf("%d",&input);
    initialize(input);
    function(0, 0, input);
    for(int i=0;i<input;i++){
        for(int j=0;j<input;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
