#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct Point{
    int x;
    int y;
    int s;
    bool operator==(const Point &po)const{
        return (x == po.x && y == po.y);
    }
    bool operator<(const Point &po)const{
        return s < po.s;
    }
    int hash(){
        return x*1000+y*100+s;
    }
}Point;

int n, m, A, B;//A个起点，B个终点
queue<Point> q;
int nm[505][505];
bool nmb[505][505];
Point eds[250002];
map<int, bool> ed;
Point dic[4] = {{-1,0,0},{1,0,0},{0,-1,0},{0,1,0}};
int cnt;

bool check(Point p){
    if(ed[p.hash()] == true)
        return true;
    return false;
}

int main(){
    memset(nm, -1, sizeof(nm));
    scanf("%d %d", &n, &m);
    scanf("%d %d", &A, &B);
    int tx, ty;
    for(int i=0; i<A; i++){
        scanf("%d %d", &tx, &ty);
        q.push({tx, ty, 0});
    nm[ty][tx] = 0;
    }
    for(int i=0; i<B; i++){
        scanf("%d %d", &tx, &ty);
        eds[i] = {tx, ty, i};
        ed.insert(make_pair(eds[i].hash(), true));
    }
 
    cnt = B;
    while(!q.empty() && cnt){
        Point p = q.front();
        q.pop();
        if(check(p)){
            cnt--;
        }
        for(int i=0; i<4; i++){
            int nx = p.x + dic[i].x;
            int ny = p.y + dic[i].y;
            if(nx >= 1 && ny >= 1 && nx <= n && ny <= m){
                if(nmb[ny][nx] == false){
                    nmb[ny][nx] = true;
                    nm[ny][nx] = nm[ny][nx] == 0 ? 0 : p.s + 1;
                    Point np = {nx, ny, p.s+1};
                    q.push(np);
                }
            }
        }
    }

    for(int i=0; i<B; i++){
        printf("%d\n", nm[eds[i].y][eds[i].x]);
    }
    return 0;
} 