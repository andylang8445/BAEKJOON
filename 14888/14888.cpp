#include <iostream>
using namespace std;

int N, num[11], calc[4];
int maxx=-2147483648, minn=2147483647;
char calcarr[10];

void eval(){
    int tmp=num[0];
    for(int i=0;i<N-1;i++){
        if(calcarr[i]=='+'){
            tmp+=num[i+1];
        }
        else if(calcarr[i]=='-'){
            tmp-=num[i+1];
        }
        else if(calcarr[i]=='*'){
            tmp*=num[i+1];
        }
        else if(calcarr[i]=='/'){
            tmp/=num[i+1];
        }
    }
    if(maxx<tmp){
        maxx=tmp;
        
        /*cout<<"max\t"<<num[0];
        for(int i=0;i<N-1;i++){
            cout<<calcarr[i]<<num[i+1];
        }
        cout<<"="<<tmp<<endl;*/
    }
    if(minn>tmp){
        minn=tmp;
        
        /*cout<<"min\t"<<num[0];
        for(int i=0;i<N-1;i++){
            cout<<calcarr[i]<<num[i+1];
        }
        cout<<"="<<tmp<<endl;*/
    }
}

void rec(int curr){
    if(curr==N-1){
        eval();
        return;
    }
    if(calc[0]>0){
        calcarr[curr]='+';
        calc[0]--;
        rec(curr+1);
        calc[0]++;
    }
    if(calc[1]>0){
        calcarr[curr]='-';
        calc[1]--;
        rec(curr+1);
        calc[1]++;
    }
    if(calc[2]>0){
        calcarr[curr]='*';
        calc[2]--;
        rec(curr+1);
        calc[2]++;
    }
    if(calc[3]>0){
        calcarr[curr]='/';
        calc[3]--;
        rec(curr+1);
        calc[3]++;
    }
    return;
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    for(int i=0;i<4;i++){
        cin>>calc[i];
    }
    rec(0);
    cout<<maxx<<'\n'<<minn;
}