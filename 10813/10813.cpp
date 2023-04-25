#include <iostream>
using namespace std;
int main(){
    int n, m;
    int arr[101];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        arr[i] = i;
    }
    for(int i=0;i<m;i++){
        int op1, op2;
        cin>>op1>>op2;
        int tmp{arr[op1]};
        arr[op1] = arr[op2];
        arr[op2] = tmp;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}