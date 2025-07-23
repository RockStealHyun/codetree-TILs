def simulate_changes(a_moves, b_moves):
    time = 0
    pos_a = 0
    pos_b = 0
    idx_a = 0
    idx_b = 0
    timer_a = 0
    timer_b = 0
    current_speed_a = 0
    current_speed_b = 0
    lead = 0  # 0: 같음, 1: A, 2: B
    changes = 0

    total_time = sum([t for v, t in a_moves])  # A와 B는 총 이동 시간 동일

    while time < total_time:
        # A의 속도 갱신
        if timer_a == 0:
            current_speed_a, timer_a = a_moves[idx_a]
            idx_a += 1
        # B의 속도 갱신
        if timer_b == 0:
            current_speed_b, timer_b = b_moves[idx_b]
            idx_b += 1

        # 1초 이동
        pos_a += current_speed_a
        pos_b += current_speed_b
        timer_a -= 1
        timer_b -= 1
        time += 1

        # 누가 앞섰는지 판단
        if pos_a > pos_b:
            now_lead = 1
        elif pos_b > pos_a:
            now_lead = 2
        else:
            now_lead = 0

        if now_lead != lead and now_lead != 0:
            changes += 1
            lead = now_lead

    return changes

# 입력 처리
N, M = map(int, input().split())
a_moves = [tuple(map(int, input().split())) for _ in range(N)]
b_moves = [tuple(map(int, input().split())) for _ in range(M)]

# 결과 출력
print(simulate_changes(a_moves, b_moves))
