#include <bits/stdc++.h>
using namespace std;

#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define out(x) cout << x << endl;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pm cout << "-1" << endl
#define inputArr(n) int arr[n]; rep(i, n) cin >> arr[i];
#define inputN \
  int n;       \
  cin >> n;

// Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;

// Debug Overloads
#ifdef localenv
#define debug(x) \
  _print(x);     \
  cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.f);
  cerr << ",";
  _print(p.s);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << "";
  }
  cerr << "]";
}

// Operator Overloads
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
  for (auto &it : v)
    cin >> it;
  return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
  for (auto &it : c)
    cout << it << " ";
  return ostream;
}

bool arrNotSorted(int arr[],int n)
{
  rep(i,n-1)
  {
    if (arr[i] > arr[i+1]) return true;
  }
  return false;
}

bool arrEqual(int arr[],int n)
{
  rep(i,n-1)
  {
    if (arr[i] != arr[i+1]) return false;
  }
  return true;
}

ll smallestDiff(int arr[],int n)
{
  int diff1 = 0,diff2 = INT_MAX;
  rep(i,n-1)
  {
    diff1 = abs(arr [i] - arr[i+1]);
    diff2 = min(diff2,diff1);
  }
  return diff2;
}

void solve()
{
  inputN;
  inputArr(n);
  if (arrEqual(arr,n)) cout << 1 << "\n";
  else if (arrNotSorted(arr,n)) cout << 0 << "\n";
  else
  {
    int minDiff = smallestDiff(arr,n);
    cout << (minDiff / 2) + 1 << "\n";
  }
}

int32_t main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
  return 0;
}