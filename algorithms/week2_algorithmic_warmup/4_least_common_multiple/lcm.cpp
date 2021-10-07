#include <iostream>
#define int long long
long long gcd(int a, int b){
    if(a==0) return b;

    return
        gcd(b%a, a);
}

long long lcm_naive(int a, int b) {
    return ((a*b)/gcd(a,b));
}

int32_t main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
