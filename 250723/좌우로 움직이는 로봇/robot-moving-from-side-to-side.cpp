#include <iostream>

#define MAX_T 1000000

using namespace std;

int n, m;
int pos_a[MAX_T  + 1], pos_b[MAX_T + 1];

int main() {
    // 입력
    cin >> n >> m;
    
    // A가 매 초마다 서있는 위치를 기록
    int time_a = 1;
    for(int i = 0; i < n; i++) {
        char d; int t;
        cin >> t >> d;
        
        while(t--) {
            if(d == 'R')
                pos_a[time_a] = pos_a[time_a - 1] + 1;
            else
                pos_a[time_a] = pos_a[time_a - 1] - 1;
            
            time_a++;
        }
    }
    
    // B가 매 초마다 서있는 위치를 기록
    int time_b = 1;
    for(int i = 0; i < m; i++) {
        int t; char d;
        cin >> t >> d;
        
        while(t--) {
            if(d == 'R')
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            else
                pos_b[time_b] = pos_b[time_b - 1] - 1;
            
            time_b++;
        }
    }
	
	
	if(time_a < time_b) {
		for(int i = time_a; i < time_b; i++) {
			pos_a[i] = pos_a[i - 1];
		}
	}
	else if(time_a > time_b) {
		for(int i = time_b; i < time_a; i++) {
			pos_b[i] = pos_b[i - 1];
		}
	}
    
    // 새롭게 만나는 횟수를 구합니다.
    int cnt = 0;
	int time_max = 0;
	if(time_a < time_b)
		time_max = time_b;
	else
		time_max = time_a;
	
    for(int i = 1; i < time_max; i++) {
        if(pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1])
            cnt++;
    }
    
    cout << cnt;
    return 0;
}
