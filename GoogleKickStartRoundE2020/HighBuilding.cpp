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
		
		int n, a, b, c;
		cin >> n >> a >> b >> c;

		int f = 0;

		if(a == n && b == n && c != n)
			f = 1;
		deque<int> q;

		a -= c, b -= c;

		int extra = n - a - b - c;
		

		if(c > 1) {
			for(int i = 0; i < 1; ++i) {
				q.push_back(n);
			}
			for(int i = 0; i < extra; ++i) {
				q.push_front(1);
			}
			for(int i = 0; i < c - 1; ++i) {
				q.push_front(n);
			}

			for(int i = 0; i < a; ++i)  {
				q.push_front(n - 1);
			}

			for(int i = 0; i < b; ++i) {
				q.push_back(n - 1);
			}
		}
		else {
			for(int i = 0; i < c; ++i) {
				q.push_back(n);
			}
			if(a == 0 && b == 0 && extra > 0) {
				f = 1;
			}
			if(a == 0 && b) {
				for(int i = 0; i < extra; ++i) {
					q.push_back(1);
				}
			}
			else if(b == 0 && a) {
				for(int i = 0; i < extra; ++i) {
					q.push_front(1);
				}
			}
			else if(b && a) {
				for(int i = 0; i < extra; ++i) {
					q.push_front(1);
				}	
			}

			for(int i = 0; i < a; ++i)  {
				q.push_front(n - 1);
			}

			for(int i = 0; i < b; ++i) {
				q.push_back(n - 1);
			}

		}
		cout << "Case #" << test << ": ";
		if(SZ(q) != n || f == 1) {
			cout << "IMPOSSIBLE\n";
			continue;
		}
		for(int i : q) {
			cout << i << " ";
		}
		cout << "\n";
	}
    
	return 0;
}
