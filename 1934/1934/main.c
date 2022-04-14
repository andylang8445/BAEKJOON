//
//  main.c
//  1934
//
//  Created by Hongjun Yun on 2022-04-14.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a, b;
        scanf("%d %d",&a,&b);
        int larger = a, smaller = b, gcd, lcm;
        if(b>a){
            larger = b;
            smaller = a;
        }
        while(smaller){
            int tmp = larger % smaller;
            larger = smaller;
            smaller = tmp;
        }
        gcd = larger;
        lcm = a*b*(a*b>0?1:-1)/gcd;
        printf("%d\n",lcm);
    }
    return 0;
}
