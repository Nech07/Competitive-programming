#include <bits/stdc++.h>
#pragma GCC optimize("03")
#pragma GCC target("sse4")
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define trav(a, x) for (auto &a : x)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define nl "\n"
#define rep(i,n) for(int i=0; i<n; i++)
#define sp " "



vector<vector<int>> graph(2001,vector<int>());
vector<bool> vis(2001);
int ans=0;
void dfs(int v, int depth){
	vis[v]=true;
	ans = max(ans, depth);
	for(auto u : graph[v]){
		if(!vis[u]) dfs(u,depth+1);
	}
}


void solve(){
	int n,a;cin >>n;
	for(int i=1; i<=n; i++){
		cin >>a;
		if(a!=-1) graph[a].pb(i);
		else graph[0].pb(i);
	}
	for(int i=0; i<graph[0].size();i++){
		dfs(graph[0][i],1);
	}
	cout <<ans;
		

}



int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}
