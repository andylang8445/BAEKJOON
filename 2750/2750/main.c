//
//  main.c
//  2750
//
//  Created by Hongjun Yun on 2020-10-27.
//

#include<stdio.h>
#include<stdlib.h>
int c(const void* f,const void* s){if(*(int*)f>*(int*)s)return 1;else if(*(int*)f<*(int*)s)return -1;else return 0;}main(){int N,a[1000],i;scanf("%d",&N);for(i=0;i<N;i++) scanf("%d",&a[i]);qsort(a,N,sizeof(int),c);for(i=0;i<N;i++)printf("%d\n",a[i]);return 0;}
