#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxz = 1e5+2;
int main()
{
    int n,m;
    cin >> n >> m;
    ll a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ll x[m];
    for(int i=0;i<m;i++){
        cin >> x[i];
    }
    ll f[maxz]={0};
    for(int i=0;i<n;i++){
        for(ll j=++a[i];j<=b[i];j++){
            f[j]++;
        }
    }
    for(int i=0;i<m;i++){
        ll ans=0;
        for(ll j=0;j<=x[i];j++){
            ans+=f[j];
        }
        if(i==m-1){
            cout << ans;
        }
        else{
            cout << ans << " ";
        }
    }
    cout << endl;
    cout << "m" << endl;
}
