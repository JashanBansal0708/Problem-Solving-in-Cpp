// Function Problem

{
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
vector<string> printPath(int m[MAX][MAX], int n);
int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

	int m[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}

	vector<string> res = printPath(m,n);
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	cout<<endl;
}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*The function returns a sorted array of strings which represents
the directions mouse will take to reach the destination.
You are required to complete the below method. */
vector<string> arr;
string str;
int visited[MAX][MAX] = {0};
int dx[] = {-1,+1,0, 0};
int dy[] = {0,0,-1, +1};
char dir[] = {'U', 'D', 'L', 'R'};
bool isSafe(int m[MAX][MAX], int n, int x, int y){
    if (x >= 0 && x < n && y >= 0 && y < n && m[x][y] == 1 && visited[x][y]==0)
        return true;
    return false;
}
void res(int m[MAX][MAX], int n,int r, int c){
    if(r == n-1 && c == n-1){
        arr.push_back(str);
        return;
    }
    visited[r][c] = 1;
    for(int i=0; i<4; i++){
        if(isSafe(m, n, r + dx[i], c + dy[i])){
            str.push_back(dir[i]);
            res(m, n, r + dx[i], c + dy[i]);
            str.pop_back();
        }
    }
    visited[r][c] = 0;
    // str.push_back('U');
    // res(m, n, r-1, c);
    // str.pop_back('U');
    // str.push_back('D')
    // res(m, n,  r+1, c);
    // str.pop_back('D');
    // str.push_back('L');
    // res(m, n,  r, c-1);
    // str.pop_back('L');
    // str.push_back('R');
    // res(m, n, r, c+1);
    // str.pop_back('R');
    // visited[r][c] == 0;
}
vector<string> printPath(int m[MAX][MAX], int n)
{
    arr.clear();
    res(m, n, 0,0);
    sort(arr.begin(), arr.end());
    return arr;
}

