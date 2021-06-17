#include<iostream>
#include<cmath>
using namespace std;
int state[1005];
int main(){
	int n,m;
	int v,w,s;
	cin>>n>>m;
	while(n--){
		cin>>v>>w>>s;
		for(int i=m;i>=v;i--){   //与01背包类似，多了一个物品数量的条件，用一个循环枚举出来就行
			for(int j=1;j<=s&&i-j*v>=0;j++)
			state[i]=max(state[i-j*v]+w*j,state[i]);
		}
	}
	cout<<state[m];
	return 0;
}