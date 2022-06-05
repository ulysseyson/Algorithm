#include<iostream>
#include<algorithm>
using namespace std;

class Point{
	/// 여기를 채우세요

    int x, y;
public:
	void input(){
		cin>>x>>y;
	}
	void print(){
		cout<<x<<' '<<y<<'\n';
	}
	bool operator<(const Point&r)const{
		return x==r.x?y<r.y:x<r.x;
	}
};
class PointList{
	/// 여기를 채우세요

    Point* data;
    int cnt=0;
public:
	PointList(int cnt){
		this->cnt=cnt;
		data=(Point*)malloc(cnt*sizeof(Point));
	}
	void input(){
		for(int i=0;i<cnt;i++){
			data[i].input();
		}
	}
	void print(){
		for(int i=0;i<cnt;i++){
			data[i].print();
		}
	}
	void sort(){
		std::sort(data,data+cnt);
	}
};
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	PointList pl(n);
	pl.input();
	pl.sort();
    pl.print();
}