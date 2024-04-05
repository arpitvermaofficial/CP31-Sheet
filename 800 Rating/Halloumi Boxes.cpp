#include <bits/stdc++.h>
#ifdef DEBUG
#include "D:\CP\debug.cpp"
#else
#define dbg(x...)
#endif
typedef  long long ll;
const int mod = 1e9+7;
#define len(x) int((x).size())
using namespace std;
void print(){cout << "\n";}template <typename T, typename... types> void print(const T& first, const types &...args) { cout << first << " "; print(args...);}
bool prime[1000001]; 
void solve()
{
    /*
    Learning 
    This question based upon Bubble sort for k>1 it is always possible to sort array

    */
  ll n, k;
  cin >> n >> k;
  vector<ll>v(n);
  for(int i=0 ;i<n; i++) {
    cin >> v[i];
  }
  
 if(k==1) {
  for(int i=0; i<n-1; i++ ){
    if(v[i]>v[i+1]) {
      print("NO");
      return ;
    }
  }
 }
  print("YES");
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t = 1;
    long long n = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        solve();
    }
}