//
//  main.c
//  5543
//
//  Created by Hongjun Yun on 2020-07-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tmp, minBurger=-1, minDrink=-1;
    for(int i=0;i<3;i++){
        scanf("%d",&tmp);
        if(minBurger==-1){
            minBurger=tmp;
        }
        else if(minBurger>tmp){
            minBurger=tmp;
        }
    }
    for(int i=0;i<2;i++){
        scanf("%d",&tmp);
        if(minDrink==-1){
            minDrink=tmp;
        }
        else if(minDrink>tmp){
            minDrink=tmp;
        }
    }
    printf("%d",(minDrink+minBurger-50));
}
