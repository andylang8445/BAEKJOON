#include<stdio.h>
int N;
int arr[501][501];
int sum[501][501];

int f(int x, int y){
    if(sum[y][x] != 0){
        return sum[y][x];
    }
    int tmp1 = 0, tmp2 = 0;
    if(arr[y-1][x] >= 0)
        tmp1 = f(x, y-1);
    if(arr[y-1][x-1] >= 0)
        tmp2 = f(x-1, y-1);
    sum[y][x] += arr[y][x] + (tmp1>tmp2?tmp1:tmp2);
    return sum[y][x];
}

int main(){
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            arr[i][j] = -1;
            sum[i][j] = 0;
        }
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxx = -1;
    for(int i=1;i<=N;i++){
        int tmp = f(i, N);
        if(maxx < tmp){
            maxx = tmp;
        }
    }
    printf("%d",maxx);
}