#include <bits/stdc++.h>
using namespace std;
/*Rat in a Maze
bool isSafe(int newX,int newY,vector<vector<bool>> &vis,vector < vector < int >> & arr,int n)
{
    if((newX>=0 && newX<0) &&(newY>=0 && newY<0) && vis[newX][newY]!=1 && arr[newX][newY]==1)
    {
        return true;
    }
    else{
        return false;
    }
}
void solve(int x,int y,vector < vector < int >> & arr,int n,vector<string> &ans,vector<vector<bool>> &vis,string path)
{
    if(x==n-1 && y==n-1)
    {
        ans.push_back(path);
        return;
    }
    //Down
    if(isSafe(x+1,y,vis,arr,n))
    {
        vis[x][y] = 1;
        solve(x+1,y,arr,n,ans,vis,path + 'D');
        vis[x][y] = 0;
    }
    //Up
    if(isSafe(x-1,y,vis,arr,n))
    {
        vis[x][y] = 1;
        solve(x-1,y,arr,n,ans,vis,path + 'U');
        vis[x][y] = 0;
    }

    //Left
    if(isSafe(x,y-1,vis,arr,n))
    {
        vis[x][y] = 1;
        solve(x,y-1,arr,n,ans,vis,path + 'L');
        vis[x][y] = 0;
    }

    //Right
    if(isSafe(x,y+1,vis,arr,n))
    {
        vis[x][y] = 1;
        solve(x,y+1,arr,n,ans,vis,path + 'R');
        vis[x][y] = 0;
    }
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> ans;
    vector<vector<bool>>vis(n,vector<bool>(n,0));
    string path = "";
    if(arr[0][0]==0)
        return ans;
    solve(0,0,arr,n,ans,vis,path);
    return ans;
}*/

/*N queens
void addSoln(vector<vector<int>>&ans,vector<vector<int>> &board,int n)
{
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}
bool isSafe(int row,int col,vector<vector<bool>>&board,int n)
{
    int x = row;
    int y = col;

    while(col>=0)
    {
        if(board[x][y]==1)
            return false;
        y--;
    }
    x=row;
    y=col;
    //check for diagonal
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    x=row;
    y=col;
    //check for diagonal
    while(x<n && y>=0)
    {
        if(board[x][y]==1)
            return false;
        x=x+1;
        y--;
    }
    return true;
}
void solve(int col, vector<vector<int>> &ans,vector<vector<bool>>&board,int n)
{
    if(col == n)
    {
        addSoln(ans,board,n);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col]==1;
            solve(col+1,ans,board,n);
            board[row][col] ==0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<bool>>board(n,vector<int>(n,0));
    vector<vector<int>>ans;
    solve(0,ans,board,n);
    return ;
}*/

/*Graph coloring Problem
bool isSafe(int node, int color[], int graph[101][101], int n, int col)
{
    for (int k = 0; k < n; k++)
    {
        if (k != node && graph[k][node] == 1 && color[k] == col)
            return false;
    }
    return true;
}
bool solve(int node, int color[], int m, int n, int graph[101][101])
{
    // base case
    if (node == n)
        return true;

    for (int i = 1; i <= m; i++)
    {
        if (isSafe(node, color, graph, n, i))
        {
            color[node] = i;
            if (solve(node + 1, color, m, n, graph))
                return true;
            color[node] = 0;
        }
    }
    return false;
}
bool GraphColoring(int graph[101][101], int m, int n)
{
    int color[n] = {0};
    if (solve(0, color, m, n, graph))
        return true;
    else
        return false;
}*/