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





void solve(){	
	int n,m;cin >>n;
	vi b(n);
	for(int i=0; i<n; i++) cin >>b[i];
	cin >>m;vi g(m);
	for(int i=0; i<m; i++) cin >>g[i];
	sort(all(b));
	sort(all(g));
	int i=0,j=0,ans=0;
	while(i<n && j<m){
		if(abs(b[i]-g[j])<=1){
			ans++;
			j++;i++;
		}
		else if(g[j]-b[i]>1) i++;
		else j++;
	}
	cout << ans<<nl;

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
