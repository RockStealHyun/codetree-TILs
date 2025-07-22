#include <iostream>

using namespace std;


// 재귀함수를 이용해 숫자를 n부터 1까지 출력하고, 다시 1부터 n까지 출력합니다.
void PrintStar(int n) {
    if(n == 0)
        return;

    cout << n << " ";
    PrintStar(n - 1);
    cout << n << " ";
}


int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    PrintStar(n);

    return 0;
}
