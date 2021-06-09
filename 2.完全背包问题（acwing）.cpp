#include<iostream>
#include<cmath>
using namespace std;
int state[1005];
int main(){
	int n,m;
	int v,w;
	cin>>n>>m;
	while(n--){
		cin>>v>>w;
		for(int i=v;i<=m;i++){//从前往后开始递推
			state[i]=max(state[i-v]+w,state[i]);
		}
	}
	cout<<state[m];
	return 0;
}