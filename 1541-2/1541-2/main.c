//
//  main.c
//  1541-2
//
//  Created by Hongjun Yun on 2022-04-12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arr[51];
    int sub = 0;
    int total = 0;
    char state = ' ';
    int isfirst = 1;
    int length = 0;
    for(int i=0;i<51;i++){
        arr[i] = 0;
    }
    
    scanf("%s",arr);
    for(int i=0;arr[i]!='\0';i++){
        length++;
        if(isfirst == 1){
            if(arr[i] >= '0' && arr[i] <= '9'){
                sub *= 10;
                sub += (arr[i]-'0');
            }
            else{
                isfirst = 0;
                total = sub;
                sub = 0;
                state = arr[i];
            }
        }
        else{
            if(state == '+'){
                if(arr[i] >= '0' && arr[i] <= '9'){
                    sub *= 10;
                    sub += arr[i]-'0';
                }
                else{
                    total += sub;
                    sub = 0;
                    state = arr[i];
                }
            }
            else{
                if(arr[i] >= '0' && arr[i] <= '9'){
                    sub *= 10;
                    sub += arr[i]-'0';
                }
                else{
                    total -= sub;
                    sub = 0;
                }
            }
        }
        if(arr[i+1] == '\0'){
            if(state == ' '){
                total = sub;
            }
            else if(state == '+'){
                total += sub;
            }
            else{
                total -= sub;
            }
        }
    }
    printf("%d",total);
    return 0;
}
