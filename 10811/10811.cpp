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
        int from, to;
        cin>>from>>to;
        if (from<to){
            int tmp[to-from+1];
            for(int j = from;j<=to;j++){
                tmp[to-j] = arr[j];
            }
            for(int j=0;j<to-from+1;j++){
                arr[j+from] = tmp[j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}