//
//  main.c
//  3053
//
//  Created by Hongjun Yun on 2020-09-01.
//  Copyright © 2020 Hongjun Yun. All rights reserved.
//

#include <stdio.h>

#define PI 3.14159265358979

int main(int argc, const char * argv[]) {
    int r;
    //float euclid, taxi;
    scanf("%d",&r);
    /*euclid=r*r*PI;
    taxi=r*r*2.0;
    printf("%.6f\n%.6f\n",euclid,taxi);*/
    printf("%.6f\n",PI*r*r);
    printf("%.6f\n",2.0*r*r);
    return 0;
}
