#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int get_change(int m) {
  int ans[m+1];
  memset(ans,0,sizeof(ans));

  for(int i=1; i<=m; i++){
    if(i<3) ans[i] +=1+ ans[i-1];
    else if(i<=3) ans[i] += 1+min(ans[i], ans[i-3]);
    else
    ans[i] =1+min({ans[i-1], ans[i-3], ans[i-4]});
  }
  //for(auto c:ans) cout<<c<<' ';

  return ans[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout <<get_change(m) << '\n';
}
