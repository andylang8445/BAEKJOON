//
//  main.c
//  1436
//
//  Created by Hongjun Yun on 2020-10-27.
//

#include <stdio.h>

int digitBreakChk666(int num){
    int n1=0,n2=0,n3=0;
    while(num>=10){
        n1=n2;
        n2=n3;
        n3=num%10;
        num/=10;
        if(n1==6&&n2==6&&n3==6)
            return 3;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int N, cnt=1;
    scanf("%d",&N);
    for(int i=666;i<10000666;i++){
        if(digitBreakChk666(i)==3){
            cnt++;
        }
        if(cnt==N){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
