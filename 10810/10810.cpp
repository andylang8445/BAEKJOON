#include <iostream>
using namespace std;
int main(){
    int n, m;
    int arr[101];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        arr[i] = 0;
    }
    for(int i=0;i<m;i++){
        int from, to, what;
        cin>>from>>to>>what;
        for(int j=from;j<=to;j++){
            arr[j] = what;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}