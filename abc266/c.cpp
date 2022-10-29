#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-7;

struct Point{
    int x,y;
    Point(int x = 0,int y = 0) : x(x),y(y){}
    Point operator-(const Point& a) const{
        return Point(x - a.x,y - a.y);
    }
};

// 外積
int cross(const Point &a, const Point &b) {
    return (a.x * b.y - a.y * b.x);
}

int ccw(const Point &a, Point b, Point c) {
    b = b - a;
    c = c - a;
    // 反時計回り
    if(cross(b, c) > EPS) return 1;
    // 時計回り
    if(cross(b, c) < -EPS) return -1;
    return 0;
}

int main(){
    vector<Point> p(4);
    for(int i = 0;i < 4;i++){
        cin >> p[i].x >> p[i].y;
    }

    for(int i = 0;i < 4;i++){
        Point A = p[i];
        Point B = p[(i+1)%4];
        Point C = p[(i+2)%4];
        if(ccw(A,B,C) == -1){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
}