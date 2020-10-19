#include <bits/stdc++.h>
using namespace std;

#define hey(x) cerr << "[" #x << " : " << x << "]\n";
#define int long long int
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int> >
#define vpi vector<pair<int, int> >
#define vvpi vector<vector<pair<int, int> > >
#define all(v) (v).begin(), (v).end()	
#define rall(v) (v).rbegin(), (v).rend()
#define pii pair<int, int>
#define pb push_back
#define SZ(x) (int)(x).size()
#define inf 1e16
#define F first
#define S second
#define PI 3.1415926535897932384626
#define bpc __builtin_popcountll(x)
#define Cout cout << fixed << setprecision(12)
#define fill(v, val) memset((v), val, sizeof(v))
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define hey2(x, y) cerr << "[" << #x << " : " << x << "], [" << #y << " : " << y << "]\n";

const int mod = 1e9 + 7;
const double pi = acos(-1);

void print(vi &a, int start = 0) {
	cerr << "Print\n[";
	for(int i = start; i < SZ(a); ++i) {
		cerr << a[i] << " ]"[i == SZ(a) - 1];
	}
	cerr << "\n";
}
vi val;
int n, N;

int check(int mid) {
	int cost = 0;
	for(int i = 0; i < n; ++i) {
		int mn = min({abs(mid - val[i]), abs(N - val[i] + mid), abs(val[i] + N - mid)});
		cost += mn;
	}
	return cost;
}
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	cin >> t;
	for(int test = 1; test <= t; ++test) {
		cin >> n >> N;
		val = vi(n);
		for(int i = 0; i < n; ++i) {
			cin >> val[i];
		}
		int ans = inf;
		
		for(int i = 0; i < n; ++i) {
		    ans = min(ans, check(val[i]));
		}	
		cout << "Case #" << test << ": " << ans << "\n";
	}
    
	return 0;
}
