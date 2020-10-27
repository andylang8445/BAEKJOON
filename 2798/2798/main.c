//
//  main.c
//  2798
//
//  Created by Hongjun Yun on 2020-10-26.
//

#include <stdio.h>

int N,M,arr[108];
int max=0,sum;

int main(int argc, const char * argv[]) {
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<(N-2);i++){
        for(int j=i+1;j<(N-1);j++){
            for(int k=j+1;k<N;k++){
                sum=arr[i]+arr[j]+arr[k];
                if((sum<=M)&&(sum>max))
                    max=sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}
