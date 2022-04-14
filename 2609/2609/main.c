//
//  main.c
//  2609
//
//  Created by Hongjun Yun on 2022-04-14.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
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
    printf("%d\n%d",gcd,lcm);
    return 0;
}
