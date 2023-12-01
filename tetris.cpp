#include <bits/stdc++.h>

using namespace std;

class tetris{
    int arr[6][10];
    vector<pair<int,int>> hash[19];

    tetris()
    {
        


    }
    void remove(int a){
        for(int i=0;i<hash[a].size();i++){
            arr[hash[a][i].first][hash[a][i].second]=0;
        }
        

    }
    void print_tetris(){
        for(int i=0;i<10;i++){
            for(int j=0;j<6;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }

    }


};

