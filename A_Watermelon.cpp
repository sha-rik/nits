// HONESTLY SE CODE LIKHNE KA FAL MILA MUJHE,BUT I'M HAPPY :-))
#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include<iomanip>
#include<algorithm>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<random>
#include<stdio.h>
#include<complex>
#include<cstring>
#include<chrono>
#include<string>
#include <unordered_map>
//header file ended
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define mod1 1000000007
#define mod2 998244353
#define vi vector<int>
#define vll vector<ll>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define mlc map<ll,char>
#define si set<int>
#define msi multiset<int>
#define all(x) (x).begin(), (x).end()
#define rsort(a) sort(a, a + n, greater<int>())
#define rvsort(a) sort(all(a), greater<int>())
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define FOR(a, b) for (auto i = a; i < b; i++)
#define rFOR(a, b) for (auto i = a; i >= b; i--)
#define read(a , n) for(int i = 0  ; i <  n ; i ++){cin >> a[i];}
void sol()
{
    //I am Partho . I am writing this comment.
    ll n;cin>>n;
    mcl m1;
    m1['T']++;
    m1['i']++;
    m1['m']++;
    m1['u']++;
    m1['r']++;
    string s1;cin>>s1;
    if (n!=5)
    {
        cout<<"NO"<<endl;
        return;
    }
    FOR(0,n)
    {
        m1.erase(s1[i]);
    }
    if (m1.size()==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
