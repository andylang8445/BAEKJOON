#include <iostream>
using namespace std;
int N, cnt=0, arr[16];
int cjeck(int a){
    for(int i=0;i<a;i++){
        if(a-i == abs(arr[a]-arr[i]) || arr[a] == arr[i]){
            return 0;
        }
    }
    return 1;
}
void rec(int curr){
    if (curr == N){
        cnt++;
        return;
    }
    for(int i=0;i<N;i++){
        arr[curr]=i;
        if(cjeck(curr)){
            rec(curr+1);
        }
    }
}
int main(){
    cin>>N;
    rec(0);
    cout<<cnt;
}