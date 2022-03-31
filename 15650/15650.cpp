#include <iostream>
using namespace std;
void function(int currLen, int arr[], int N, int digit){
    if(currLen == digit){
        for(int i=0;i<digit;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=N;i++){
        if (currLen == 0 || (currLen>0 && arr[currLen-1]<i)){
            arr[currLen]=i;
            function(currLen+1, arr, N, digit);
        }
    }
    return;
}
int main(){
    int a, b;
    int arr1[9];
    
    cin>>a>>b;
    if (b==1){
        for(int i=1;i<=a;i++){
            cout<<i<<endl;
        }
    }
    else{
        function(0, arr1, a, b);
    }
    return 0;
}