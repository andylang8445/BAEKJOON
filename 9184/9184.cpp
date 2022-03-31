#include <iostream>

using namespace std;

int arr[21][21][21];
bool visited[21][21][21];

int w(int a, int b, int c){
    if(a<=0 || b<=0 || c<=0){
        return 1;
    }
    else if(a>20 || b>20 || c>20){
        return w(20, 20, 20);
    }
    else{
        if(visited[a][b][c]){
            return arr[a][b][c];
        }
        visited[a][b][c]=true;
        int tmp=w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
        arr[a][b][c]=tmp;
        return tmp;
    }
}

int main()
{
    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++){
            for(int k=0;k<21;k++){
                arr[i][j][k]=0;
                visited[i][j][k]=false;
            }
        }
    }
    while(true){
        int a, b, c;
        cin>>a>>b>>c;
        if(a==b&&b==c&&b==-1){
            break;
        }
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
    }
   
   return 0;
}