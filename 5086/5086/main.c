//
//  main.c
//  5086
//
//  Created by Hongjun Yun on 2022-04-12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a == 0 && b == 0){
            break;
        }
        if(a%b == 0){
            printf("multiple\n");
        }
        else if(b%a == 0){
            printf("factor\n");
        }
        else{
            printf("neither\n");
        }
    }
    return 0;
}
