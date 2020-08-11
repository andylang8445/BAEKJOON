//
//  main.c
//  2839
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>
int input;

void recur(int f, int t){
    if(f<0){
        printf("-1");
        return;
    }
    else if((f*5)+(t*3)==input){
        printf("%d",(f+t));
        return;
    }
    recur(f-1, (input-((f-1)*5))/3);
}

int main(int argc, const char * argv[]) {
    int five=0,three=0;
    scanf("%d",&input);
    five=input/5;
    three=(input-five*5)/3;
    recur(five, three);
    return 0;
}
