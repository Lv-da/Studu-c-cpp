#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];//二维数组存储矩阵
int cnt=1;
queue<int> que;
queue<int> x;
queue<int> y;

void printMatrix(int lenx,int leny)
	{
		int rowLen = leny;//行数
		int colLen = lenx;//列数
		
		for(int i = colLen - 1; i >= 0 ; i--)//右上角row = 0, col = colLen - 1 ~ 0;
		{
			int row = 0;
			int col = i;
			while(row >= 0 && row < rowLen && col >= 0 && col < colLen)
			{
				cout<<a[row][col]<<" ";
				row++;
				col++;
			}
			cout<<endl;
		}
		
		for(int i = 1; i < rowLen; i++)//左下角col = 0， row = 1 ~ rowLen - 1;
		{
			int row = i;
			int col = 0;
			while(row >= 0 && row < rowLen && col >= 0 && col < colLen)
			{
				cout<<a[row][col]<<" ";
				row++;
				col++;
			}
			cout<<endl;
		}
	}

int main(){
	int cols,rows;
	cin>>rows>>cols;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			a[i][j]=cnt;
			cnt++;
		}
	}
	printMatrix(cols,rows);
	//斜45度角打印矩阵
	//如输入：3 3
	//输出：
	//3
	//2 6
	//1 5 9
	//4 8
	//7
	
}
