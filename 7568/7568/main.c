//
//  main.c
//  7568
//
//  Created by Hongjun Yun on 2020-10-26.
//

#include <stdio.h>

struct Person{
    int x, y, rank;
};

int N;
struct Person arr[50];

void myFunction(int num){
    for(int i=0;i<N;i++){
        if((arr[i].x>arr[num].x)&&(arr[i].y>arr[num].y)){
            arr[num].rank++;
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&arr[i].x,&arr[i].y);
        arr[i].rank=1;
    }
    for(int i=0;i<N;i++){
        myFunction(i);
    }
    
    for(int i=0;i<N;i++){
        printf("%d ",arr[i].rank);
    }
    
    return 0;
}
