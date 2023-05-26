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




void solve(){
	int n; cin >>n;
	string s; cin >>s;
	vi a(26,0), b(26,0);
	trav(x,s){
		a[x-'a'] ++;
	}
	int ans =0;
	trav(x,s){
		int temp =0;
		a[x-'a']--; b[x-'a']++;
		for(int i=0; i< 26; i++){
			temp += min(1,a[i])+min(1,b[i]);
		}
		ans = max(ans, temp);
	}
	cout << ans<<nl;

}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
