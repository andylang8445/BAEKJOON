//
//  main.c
//  2108
//
//  Created by Hongjun Yun on 2020-11-05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, arr[8001], tmp, min = 4000, max = -4000,  maxpopulation = 0, populationCnt = 0, populationSave = 0, sum = 0;
    for(int i=0;i<8001;i++){
        arr[i]=0;
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&tmp);
        if(tmp > max){
            max = tmp;
        }
        if(tmp < min){
            min = tmp;
        }
        arr[tmp+4000]++;
        
        if(maxpopulation < arr[tmp+4000]){
            maxpopulation = arr[tmp+4000];
            populationCnt = 1;
            populationSave = tmp;
        }
        else if(maxpopulation == arr[tmp+4000]){
            populationCnt++;
        }
        sum+=tmp;
    }
    //산술평균
    printf("%.0f\n",(double)sum/N);
    
    //중앙값
    tmp = 0;
    for(int i=0;i<8001;i++){
        tmp+=arr[i];
        if(tmp>(N/2)){
            printf("%d\n",i-4000);
            break;
        }
    }
    
    //최빈값 출력
    if(populationCnt == 1){
        printf("%d\n",populationSave);
    }
    else{
        tmp = 0;
        for(int i=0;i<8001;i++){
            if(arr[i] == maxpopulation){
                tmp++;
                if(tmp == 2){
                    printf("%d\n",i-4000);
                    break;
                }
            }
        }
    }
    
    //범위 출력
    printf("%d\n",(max-min));
    return 0;
}
