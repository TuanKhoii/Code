#include <iostream>
#include <fstream>
#include <queue>
#define MAX 100

using namespace std;

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int R, C, xb, yb, xc, yc;
bool a[MAX][MAX];

struct Bessie{
	int x, y, d;

	Bessie(int x1, int y1, int d1){
		x = x1;
		y = y1;
		d = d1;
	}
};

int main(){

	cin >> R >> C;
	
	char c;

	for (int i = 0; i < R; i++){
		for (int j = 0; j < C; j++){
			cin >> c;
			if (c == 'B'){
				xb = i;
				yb = j;
				a[i][j] = true;
			}
			else if (c == 'C'){
				xc = i;
				yc = j;
				a[i][j] = false;
			}
			else if (c == '.'){
				a[i][j] = true;
			}
			else
				a[i][j] = false;
		}
	}

	queue <Bessie> q;
	Bessie u(xc, yc, 1);
	q.push(u);
	
	int x1, y1;
	
	while (!q.empty()){
		u = q.front();
		q.pop();
		if (u.x == xb && u.y == yb){
			cout << u.d - 1;
			break;
		}
		else{
			for (int i = 0; i < 4; i++){
				x1 = u.x + dx[i];
				y1 = u.y + dy[i];

				if (0 <= x1 && x1 < R && 0 <= y1 && y1 < C && a[x1][y1]){
					a[x1][y1] = false;
					q.push(Bessie(x1, y1, u.d + 1));
				}
			}
		}
	}

	return 0;
}