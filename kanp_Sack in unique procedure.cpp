#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,int>t;
for(int i=0;i<n;i++){
int x;
cin>>x;
  t.insert({x,i});
}
vector<int>v,v2;
for(auto i:t){

  v.push_back(i.second);

}
int a=v.size()-1;
int b=v.size()-2;
  v2.push_back(v[a]);
  v2.push_back(v[b]);
  sort(v2.begin(), v2.end());
  for(int i:v2){
    cout<<i<<" ";
  }
  cout<<endl;
}
}
