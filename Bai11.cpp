#include<bits/stdc++.h>
#define ll long long
#define N 3
#define M 5
#define pii pair<int,int>
#define x first
#define y second
using namespace std;
int matrix[5][5];
int dx[]={0,0,-1,1},dy[]={1,-1,0,0};
int can(int x, int y){return x>=0&&x<N&&y>=0&&y<M &&(matrix[x][y]==1 || matrix[x][y]==2);}
int res=0;
void solve(pii start)
{
	queue<pii> Q({start});
	while(Q.size())
	{
		pii a=Q.front(); Q.pop();
		for(int i=0; i<4; i++)
		{
			int nx=a.x+dx[i];
			int ny=a.y+dy[i];
			if(can(nx, ny)) 
			{
				Q.push({nx,ny});
				matrix[nx][ny]=-1;
			}
		}
	}
}

void print(){for(int i=0; i<N; i++) {for(int j=0; j<M; j++) printf("%5d", matrix[i][j]); cout <<"\n";}}
int main()
{
	freopen("test.txt", "r", stdin);
	for(int i=0; i<N; i++) for(int j=0; j<M; j++) cin >> matrix[i][j];
	for(int i=0; i<N; i++) for(int j=0; j<M; j++) if(matrix[i][j]==2) {res++; solve({i,j});}
	int k=-1;
	for(int i=0; i<N; i++) for(int j=0; j<M; j++) if(matrix[i][j]==1) {cout << k; return 0;}
	cout << res;

//	print();

}






