#include<bits/stdc++.h>
#define int     int64_t
#define pb       push_back
#define endl    '\n'
#define pll     pair<int,int>
#define vll     vector<int>
#define all(a)     (a).begin,(a).end()
#define x       first
#define y       second
#define sz(x)    (int)x.size()
#define lbnd     lower_bound
#define ubnd     upper_bound
#define bs       binary_search
#define mi       map<int,int>
#define rep(i,a,b)   for(int i=a;i<b;i++)
using namespace std;

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      bool isw = true;
      int last = s.size()-1;
      for(int i=0;i<s.size()/2;i++){
        if(s[i] != s[last-i]){
          isw = false;
        }
      }
      if(isw){
        cout<<"wins"<<endl;
      }else{
        cout<<"loses"<<endl;
      }
    }
  return 0;
}
