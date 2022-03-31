#include <iostream>
using namespace std;

int N, calc[4];
int map[20][20];
int minn=2147483647;
bool team[20];
void func(int assigned, int loc){
    if(assigned==N/2){
        int sum1=0, sum2=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(team[i]==team[j]){
                    switch(team[i]){
                        case true:
                            sum1+=map[i][j];
                            break;
                        case false:
                            sum2+=map[i][j];
                            break;
                        default:
                            break;
                    }
                }
            }
        }
        int tmp=abs(sum1-sum2);
        if(tmp<minn){
            minn=tmp;
        }
        return;
    }
    for(int i=loc;i<N;i++){
        team[i]=true;
        func(assigned+1, i+1);
        team[i]=false;
    }
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>map[i][j];
        }
    }
    func(0, 0);
    cout<<minn;
}