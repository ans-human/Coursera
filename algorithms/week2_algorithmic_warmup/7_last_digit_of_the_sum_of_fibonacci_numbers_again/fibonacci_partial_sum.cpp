#include <iostream>
#include <vector>
#define ll long long
using std::vector;
int pisano(int m){
   int previous = 0, current=1;

    for(int i=0; i<m*m; i++){
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;

        if(previous==0 && current==1){
            return (i+1);
        }
    }
}
long long get_fibonacci_sum_naive(long long n) {

    if (n == -1)
        return 0;
    else if(n <= 1)
        return n;

    ll period = pisano(10);
    ll num_periods = n/period;
    n = n%period;



    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;
    ll s2 = 1;
    for (long long i = 0; i < period-1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous%10 + current%10)%10;
        if(i<n-1)
        sum = (sum%10+current%10)%10;

        s2 = (s2%10+current%10)%10;
    }

    sum = sum%10 + ((s2%10)*(num_periods%10))%10;
    return sum % 10;

}
int32_t main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << (get_fibonacci_sum_naive(to) - get_fibonacci_sum_naive(from-1) + 10)%10 << '\n';
}
