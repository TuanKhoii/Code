#include <iostream>
using namespace std;

const int MAX_N = 100;

int dx[] = {1, 1};
int dy[] = {0, 1};

int triangle[MAX_N][MAX_N];
int n;

int currentPath[MAX_N][2];
int maxPath[MAX_N][2];
int pathLength, maxLength;
int currentSum, maxSum = -1;

void input();
void Try(int x, int y);

int main() {
    input();
    currentPath[0][0] = 0;
    currentPath[0][1] = 0;
    currentSum = triangle[0][0];
    pathLength = 1;
    Try(0, 0);
    for (int i = 0; i < maxLength; ++i) {
        cout << triangle[maxPath[i][0]][maxPath[i][1]] << " ";
    }
    cout << endl << maxSum;
    return 0;
}

void input() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j) {
            cin >> triangle[i][j];
        }
    }
}

void Try(int x, int y) {
    if (x == n - 1) {
        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxLength = pathLength;
            for (int i = 0; i < pathLength; ++i) {
                maxPath[i][0] = currentPath[i][0];
                maxPath[i][1] = currentPath[i][1];
            }
        }
    } else {
        for (int i = 0; i < 2; ++i) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (xx < n && yy <= xx) {
                currentSum += triangle[xx][yy];
                currentPath[pathLength][0] = xx;
                currentPath[pathLength][1] = yy;
                ++pathLength;
                
                Try(xx, yy);
                
                --pathLength;
                currentSum -= triangle[xx][yy];
            }
        }
    }
}
