//
//  main.cpp
//  22341
//
//  Created by Hongjun Yun on 2023-05-17.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int N, S;
    cin>>N>>S;
    int x{N}, y{N};
    for(int i=0;i<S;i++){
        int t_x, t_y;
        cin>>t_x>>t_y;
        if(t_x < x && t_y < y){
            if(t_x*y >= t_y*x){
                x = t_x;
            }
            else{
                y = t_y;
            }
        }
    }
    cout<<(x*y);
    return 0;
}
