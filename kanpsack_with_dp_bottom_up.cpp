#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}


int s;
cin>>s;
bool dp[n+1][s+1];
dp[0][0]=true;// intialy when chosse 0 item and 0 weight. so its true

for(int i=1;i<=s;i++){ // with 0 item we can.nt take any weight.
dp[0][i]=false;
}

for(int i=1;i<=n;i++){
for(int j=0;j<=s;j++){
    if(a[i-1]<=j){
        dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
    }
  else{
  dp[i][j]=dp[i-1][j];
  }
}

}
 for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (dp[i][j])
                cout << "T ";
            else
                cout << "F ";
        }
        cout << endl;
    }


if(dp[n][s]){
cout<<"yes"<<endl;

}
else{

cout<<"NO"<<endl;
}
}
