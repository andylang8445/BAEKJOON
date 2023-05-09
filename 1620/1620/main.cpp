//
//  main.cpp
//  1620
//
//  Created by Hongjun Yun on 2023-05-04.
//

#include <iostream>

using namespace std;

string names[100001];

int main(int argc, const char * argv[]) {
    std::ios::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>names[i];
    for(int i=0;i<m;i++){
        string tmp;
        cin>>tmp;
        if(tmp[0]>='A' && tmp[0]<='Z'){
            for(int j=0;j<n;j++){
                if(names[j] == tmp){
                    cout<<(j+1)<<"\n";
                    break;
                }
            }
        }
        else{
            int ttmp = stoi(tmp);
            cout<<names[ttmp-1]<<"\n";
        }
    }
    return 0;
}
