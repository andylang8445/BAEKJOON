#include <stdio.h>
int N, flag=3;
int save[2][42];
int z_cnt, o_cnt;
int main(){
    save[0][0]=1;
    save[1][0]=0;
    save[0][1]=0;
    save[1][1]=1;
    save[0][2]=save[1][2]=1;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);
        for(int j=flag;j<=tmp;j++){
          save[0][j]=save[0][j-1]+save[0][j-2];
          save[1][j]=save[1][j-1]+save[1][j-2];
        }
        printf("%d %d\n",save[0][tmp], save[1][tmp]);
    }
}