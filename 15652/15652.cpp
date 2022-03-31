#include <iostream>
using namespace std;
int a, b;
int arr1[9];
void function(int currLen){
    if(currLen == b){
        for(int i=0;i<b;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i=1;i<=a;i++){
            if (currLen == 0 || (arr1[currLen-1] <= i)){
                arr1[currLen]=i;
                function(currLen+1);
            }
        }
    }
}
int main(){
    cin>>a>>b;
    function(0);
}