#include<stdio.h>
int N;
int arr[1000001];
int f(int curr){
    if(arr[curr] != -1){
        return arr[curr];
    }
    arr[curr] = (f(curr-2) + f(curr-1));
    arr[curr] %= 15746;
    return arr[curr];
}

int main(){
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        arr[i] = -1;
    }
    arr[1] = 1;
    arr[2] = 2;
    printf("%d",f(N));
}
