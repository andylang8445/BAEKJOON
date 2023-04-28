//
//  main.cpp
//  10812
//
//  Created by Hongjun Yun on 2023-04-25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m;
    int arr[110];
    int tmp[110];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    for(int i=0;i<m;i++){
        int from, to, pivot;
        cin>>from>>to>>pivot;
        for(int j=from;j<pivot;j++)
            tmp[j] = arr[j];
        /*cout<<"\n\t"<<"from: "<<from<< ", to: "<<to<<", pivot: "<<pivot<<endl<<"\t";
        for(int k=1;k<=n;k++)
            cout<<arr[k]<<" ";
        cout<<endl<<"\t";
        for(int k=1;k<=n;k++){
            if(k == from || k == to || k == pivot)
                cout<<"^ ";
            else
                cout<<"  ";
        }
        cout<<endl;*/
        for(int j=pivot;j<=to;j++){
            arr[j - pivot + from] = arr[j];
        }
        /*cout<<"\t";
        for(int j=1;j<=n;j++)
            cout<<arr[j]<<" ";
        cout<<endl;*/
        for(int j=from;j<pivot;j++){
            arr[j+to-pivot+1] = tmp[j];
            //cout<<j<<"->"<<(j+to-pivot)<<",";
        }
        /*cout<<endl;
        
        for(int j=1;j<=n;j++)
            cout<<arr[j]<<" ";
        cout<<endl;*/
    }
    
    for(int j=1;j<=n;j++)
        cout<<arr[j]<<" ";
    return 0;
}
