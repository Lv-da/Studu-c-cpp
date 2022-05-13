#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> dfs(vector<vector<int>>& image, int sr, int sc,int oldColor, int newColor){
        if(sr<0||sr>=image.size()||sc<0||sc>=image[sr].size()||image[sr][sc]==newColor||image[sr][sc]!=oldColor){

        }else{
            oldColor=image[sr][sc];
            image[sr][sc]=newColor;
            dfs(image,sr+1,sc,oldColor,newColor);
            dfs(image,sr,sc+1,oldColor,newColor);
            dfs(image,sr-1,sc,oldColor,newColor);
            dfs(image,sr,sc-1,oldColor,newColor);
        }
        return image;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        return dfs(image,sr,sc,image[sr][sc],newColor);
    }
};