#include <iostream>
#include <algorithm>

using namespace std;

// n과 m의 최대공약수를 출력합니다.
void FindGcd(int n, int m) {
    int gcd = 0;
    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0)
            gcd = i;
    }

    cout << gcd;
}

int main() {
    // 변수 선언 및 입력:
    int n, m;
    cin >> n >> m;

    FindGcd(n, m);
    
    return 0;
}
