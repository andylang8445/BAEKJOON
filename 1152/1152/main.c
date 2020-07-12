//
//  main.c
//  1152
//
//  Created by Hongjun Yun on 2020-07-12.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[1000003];
     fgets(str, 1000003, stdin);
    int i=0;
    int cnt = 0;
    for (i; str[i]; i++){
        if (str[i] == ' '&&str[i + 1] != '\n')
            cnt++;
    }
    if (str[0] == '\n'||str[0]==' ')
        cnt--;
    if (str[strlen(str) - 1] == ' ')
        cnt--;
    printf("%d", cnt+1);
    return 0;
}
