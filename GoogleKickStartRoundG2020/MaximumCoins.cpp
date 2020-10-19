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
#define inf 1e12
#define F first
#define S second
#define PI 3.1415926535897932384626
#define bpc __builtin_popcountll(x)
#define Cout cout << fixed << setprecision(12)
#define fill(v, val) memset((v), val, sizeof(v))
#define fast ios::sync_with_stdio(false); cin.tie(0);
#define hey2(x, y) cerr << "[" << #x << " : " << x << "], [" << #y << " : " << y << "]\n";

const int N = 1e6 + 10;
const int mod = 1e9 + 7;
const double pi = acos(-1);

void print(vi &a, int start = 0) {
	cerr << "Print\n[";
	for(int i = start; i < SZ(a); ++i) {
		cerr << a[i] << " ]"[i == SZ(a) - 1];
	}
	cerr << "\n";
}

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1;
	cin >> t;
	for(int test = 1; test <= t; ++test) {
		int n;
		cin >> n;
		int a[n][n];
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				cin >> a[i][j];
			}
		}
		int cost = 0;
		for(int i = 0; i < n; ++i) {
			int x = 0, y = i;
			int temp = 0;
			while(x < n && y < n) {
				temp += a[x][y];
				x++, y++;
			}
			cost = max(cost, temp);
		}
		for(int i = 0; i < n; ++i) {
			int temp = 0;
			int x = i, y = 0;
			while(x < n && y < n) {
				temp += a[x][y];
				x++, y++;
			}
			cost = max(cost, temp);
		}
		cout << "Case #" << test << ": " << cost << "\n";
	}
    
	return 0;
}
