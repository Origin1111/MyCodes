#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int state[1005];
int main(){
    int n,m;
    int w,v;
    cin>>n>>m;
    while(n--){
        cin>>w>>v;
        for(int i=m;i>=w;i--){
                state[i]=max(state[i],state[i-w]+v);
        }
    }
    cout<<state[m];//可以不用遍历找最大值，m就是最大，因为有偏移，后面的物品价值只会更大。
    return 0;
}