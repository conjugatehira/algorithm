#include<bits/stdc++.h>
using namespace std;

int dp[1003][1003];
int knapsack(int n, int a[],int s ){
if(n==0){
  if(s==0) return 1;
  else return 0;
}
if(dp[n][s]!=-1){
   return dp[n][s];
}
if(a[n-1]<=s){
int op1=knapsack(n-1,a,s-a[n-1]);
int op2=knapsack(n-1,a,s);
   dp[n][s]=op1+op2;
   return dp[n][s];
}
else{
   int op2=knapsack(n-1,a,s);
    return dp[n][s]=op2;
}
}
int main(){
    int n,s;
cin>>n;
cin>>s;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];


}
for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++){
        dp[i][j]= -1;
    }

}
int l=knapsack(n,a,s);
for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++){
        cout<<dp[i][j]<<" ";
    }
cout<<endl;
}
cout<<l<<endl;

}
