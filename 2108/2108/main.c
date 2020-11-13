//
//  main.c
//  2108
//
//  Created by Hongjun Yun on 2020-11-05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, arr[8000], sum=0, cnt=0, max=0, tmp, min=4000;
    for(int i=0;i<8000;i++){
        arr[i]=0;
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&tmp);
        arr[tmp+4000-1]++;
        if(max<arr[tmp+4000-1]){
            max=arr[tmp+4000-1];
            cnt=1;
        }
        else if(max==arr[tmp+4000-1]){
            cnt++;
        }
        if(min>arr[tmp+4000-1]){
            min=arr[tmp+4000-1];
        }
        sum+=tmp;
    }
    
    for(int i=0;i<8000;i++){
        if(arr[i]>0){
            printf("%d: %d\n",(i-4000+1),arr[i]);
        }
    }
    printf("max: %d\nmin:%d\n",max,min);
    
    
    printf("%d\n",(sum/N));
    
    tmp=0;
    for(int i=0;i<8000;i++){
        tmp+=arr[i];
        if((N/2)<=tmp){
            printf("%d\n",(i-4000+2));
            break;
        }
    }
    
    tmp=0;
    for(int i=0;i<8000;i++){
        if(cnt==1){
            if(max==arr[i]){
                printf("%d\n",(i-4000+1));
                break;
            }
        }
        else if(cnt>1&&max==arr[i]){
            tmp++;
            if(tmp==2){
                printf("%d\n",(i-4000+1));
            }
        }
    }
    
    printf("%d",(max-min));
    return 0;
}
