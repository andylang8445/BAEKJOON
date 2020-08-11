//
//  main.c
//  5622
//
//  Created by Hongjun Yun on 2020-08-11.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char input[16];
    int cnt=0, timing[]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    scanf(" %s",input);
    for(int i=0;input[i]!='\0';i++){
        cnt+=timing[input[i]-'A'];
    }
    printf("%d",cnt);
    return 0;
}
