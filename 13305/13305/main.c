//
//  main.c
//  13305
//
//  Created by Hongjun Yun on 2022-04-12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long int N;
    long long int gasPrice[100001], gasConsumption[100001];
    long long int sum = 0;
    long long int low = 1000000001;
    scanf("%lld",&N);
    for(long long int i=0;i<N-1;i++){
        scanf("%lld",&gasConsumption[i]);
    }
    for(long long int i=0;i<N;i++){
        scanf("%lld",&gasPrice[i]);
    }
    low = gasPrice[0];
    sum = low * gasConsumption[0];
    N--;
    for(int i=1;i<N;i++){
        if(gasPrice[i] < low){
            low = gasPrice[i];
        }
        sum += low * gasConsumption[i];
    }
    printf("%lld",sum);
    return 0;
}
