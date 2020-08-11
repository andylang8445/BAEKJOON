//
//  main.c
//  2941
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char input[101];
    int cnt=0;
    scanf("%s",input);
    for(int i=0;input[i]!='\0';i++){
        if(input[i]=='c'||input[i]=='l'||input[i]=='n'||input[i]=='s'||input[i]=='z'||input[i]=='d'){
            cnt++;
            i++;
        }
        else if(input[i]>='a'&&input[i]<='y')
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
