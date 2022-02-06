//
//  main.c
//  15649
//
//  Created by Hongjun Yun on 2022-02-05.
//

#include <stdio.h>
#include <stdbool.h>
int m, n;

void func(int current, int arr[]) {
    if(current == m){
        for(int i=0;i<m;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++){
        bool check = false;
        for(int j=0;j<current;j++){
            if(i==arr[j]){
                check = true;
                break;
            }
        }
        if(!check){
            arr[current]=i;
            func(current+1, arr);
        }
    }
    return;
}

int main(int argc, const char * argv[]) {
    int array[8];
    scanf("%d %d",&n,&m);
    array[0]=1;
    func(0, array);
    return 0;
}
