#include<stdio.h>
int N;
long long arr[101];
long long f(int curr){
    if(arr[curr] != -1){
        return arr[curr];
    }
    arr[curr] = f(curr-2) + f(curr-3);
    return arr[curr];
}

int main(){
    scanf("%d",&N);
    for(int i=0;i<101;i++){
        arr[i] = -1;
    }
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    for(int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);
        printf("%lld\n",f(tmp));
    }
}
