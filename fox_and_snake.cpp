#include <bits/stdc++.h>
using namespace std;



// input 5 3

/*output
###
..#
###
#..
###
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen(
        "input.txt",
        "r",
        stdin);
    freopen(
        "output.txt",
        "w",
        stdout);
#endif
    

    int row=0,col=0;
    cin>>row>>col;

    bool flag=true;
    vector<vector<char>> grid(row,vector<char>(col,'.'));

    

    for(int i=0;i<row;i++){

        //if the row is odd then all #
        if(i%2==0){
            for(int j=0;j<col;j++){
                grid[i][j]='#';
            }
        }
        else{

            //flag true means right #
            if(flag){
                grid[i][col-1]='#';
            }
            else{
                grid[i][0]='#';
            }
            flag=!flag;
        }

        
        
        
    }

    for(auto it:grid){
        for(auto t:it){
            cout<<t<<"";
        }
        cout<<endl;
    }
    
}