//
//  main.c
//  2981
//
//  Created by Hongjun Yun on 2022-04-14.
//

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int gcd(int a, int b) {
    return a % b ? gcd(b, a%b) : b;
}

int main(int argc, const char * argv[]) {
    int N, tmp = 0;
    int arr[500], sol[500];
    int smallest = 1000000000;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, N, sizeof(int), cmpfunc);
    smallest = arr[1]-arr[0];
    for(int i=2;i<N;i++){
        smallest = gcd(smallest, (arr[i]-arr[i-1]));
    }
    for(int i=2;i*i<=smallest;i++){
        if(smallest%i == 0){
            sol[tmp++] = i;
            if(i*i<smallest){
                sol[tmp++] = smallest/i;
            }
        }
    }
    sol[tmp++] = smallest;
    qsort(sol, tmp, sizeof(int), cmpfunc);
    for(int i=0;i<tmp;i++){
        printf("%d ",sol[i]);
    }
    return 0;
}
