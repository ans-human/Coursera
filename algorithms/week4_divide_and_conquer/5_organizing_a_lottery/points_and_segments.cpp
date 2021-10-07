#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
using std::vector;
int n, m;
unordered_map<int,int> mp;
struct fun{
    bool operator ()(const pair<int,char>& a,const pair<int,char>& b){
    if(a.first<b.first)
        return true;
    if(a.first>b.first)
        return false;
    return a.second < b.second;
}
};

void fast_count_segments(vector<pair<int,char>> v, int n) {
  ll cnt=0;
  for(int i=0; i<v.size(); i++){
    if(v[i].second == 'a') cnt++;
    else if( v[i].second == 'b' ) mp[v[i].first] = cnt;
    else cnt--;
    }

}

int main() {

  std::cin >> n >> m;
  vector<pair<int,char>> v;
  for (size_t i = 0; i < n; i++) {
    int a,c; cin>>a>>c;
    v.push_back(make_pair(a,'a'));
    v.push_back(make_pair(c,'c'));
  }
   ll a[m];
  for (size_t i = 0; i < m; i++) {
    int b; cin>>b;
    a[i] = b;
    v.push_back(make_pair(b,'b'));
  }
    //for(auto c:v) cout<<c.first<<' '<<c.second<<endl;
    //cout<<v.size();
    sort(v.begin(),v.end(), fun());
   // for(auto c:v) cout<<c.first<<' '<<c.second<<" ";
  //use fast_count_segments
  //cout<<endl;

  fast_count_segments(v,n+m);

  for(int i=0; i<m; i++) cout<<mp[a[i]]<<" ";
}
