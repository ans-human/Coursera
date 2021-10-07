#include <iostream>
using namespace std;
#define ll long long

ll get_change(ll m) {
  ll n=0;

    if(m>=10){
        n+=m/10;
        m%=10;
    }
    if(m>=5){
        n+=m/5;
        m%=5;
    }
    n += m;

  return n;
}

int main() {
  ll m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
