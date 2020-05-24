#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
#include <cstdio>

using namespace std;
const int DEBUG = 0;
//vector<vector<int>>visited;
int visited[101][101] = { 0, };
vector<vector<int>> map;

int dep[101][101] = { 0 };
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int N = 0, M = 0;
int maxarea = 0;

void bfs(int y, int x, int cnt, int color) {
	int areasize = 0;
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));

	//visited[y][x] = cnt;
	while (!q.empty()) {
		areasize++;
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < N && 0 <= ny && ny < M) {
				if (map[ny][nx] == color && visited[ny][nx] == 0) {
					q.push(make_pair(ny, nx));
					if (DEBUG) {
						printf("nx:%d ,  ny:%d\n", nx, ny);
					}
					visited[ny][nx] = cnt;
				}
			}
		}
	}
	//printf("maxarea:%d, areasize:%d",maxarea, areasize);
	if (areasize > maxarea) {
		maxarea = areasize;
	}
}


vector<int> solution(int m, int n, vector<vector<int>> picture) {
	int number_of_area = 0;
	int max_size_of_one_area = 0;

	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;
	memset(visited, 0, sizeof(visited));

    //init :
	// if(DEBUG) {
	//     printf("visited init===========\n");
	//     for (int i=0; i<m; i++) {
	//         for (int j=0; j<n; j++) {
	//             printf("%d ",visited[i][j]);
	//         }
	//         puts("");
	//     }    
	// }

	M = m; N = n;
	map.assign(101, vector<int>(101, 0));
	map = picture;

	//cordination
	//m=i=y,
	//n=j=x

	//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	int cnt = 1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if ((map[i][j] != 0) && (visited[i][j] == 0)) {
				if (DEBUG) { printf("x:%d,y:%d,cnt:%d, map:%d,  visited:%d \n", j, i, cnt, map[i][j], visited[i][j]); }
				bfs(i, j, cnt,map[i][j]);
				cnt++;
				if (DEBUG) { printf("x:%d,y:%d,cnt:%d, map:%d,  visited:%d \n", j, i, cnt, map[i][j], visited[i][j]); }
			}
		}
	}


	/*
    if (DEBUG) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", picture[i][j]);
            }
            puts("");
        }
    }
	*/

	if (DEBUG) {
		printf("cnt:%d\n", cnt);
		puts("map===============");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				//ans[visited[i][j]]+=1;
				printf("%d ", map[i][j]);
			}puts("");
		}

		puts("visited arr printf!!============");
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", visited[i][j]);
			}puts("");
        }
	}

	answer[0] = cnt-1;
	answer[1] = maxarea-1;


	return answer;
}


int main(int argc, char** argv)
{
	vector<vector<int>> tc1 = { {1, 1, 1, 0},{1, 2, 2, 0},{1, 0, 0, 1},{0, 0, 0, 1},{0, 0, 0, 3},{0, 0, 0, 3} };
	vector<vector<int>> tc2 = { {1, 1, 1, 0},{1, 1, 1, 0},{0, 0, 0, 1},{0, 0, 0, 1},{0, 0, 0, 1},{0, 0, 0, 1} };
	vector<int> answer = solution(6, 4, tc2);
	printf("answer : %d,%d \n", answer[0], answer[1]);
	//Answer : tc1 ; 4,5
	//Answer : tc2 : 2,6

}
