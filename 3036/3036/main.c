//
//  main.c
//  3036
//
//  Created by Hongjun Yun on 2022-04-14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, C1;
    int arr[100];
    scanf("%d",&N);
    scanf("%d",&C1);
    for(int i=0;i<N-1;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<N-1;i++){
        int larger = C1, smaller = arr[i], gcd;
        if(arr[i]>larger){
            larger = arr[i];
            smaller = C1;
        }
        while(smaller){
            int tmp = larger % smaller;
            larger = smaller;
            smaller = tmp;
        }
        gcd = larger;
        printf("%d/%d\n",C1/gcd, arr[i]/gcd);
    }
    return 0;
}
