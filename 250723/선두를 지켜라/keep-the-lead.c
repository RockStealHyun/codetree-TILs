import sys

def solve():
    # Read N and M from the first line
    N, M = map(int, sys.stdin.readline().split())

    # Read A's movement data
    a_movements = []
    for _ in range(N):
        a_movements.append(list(map(int, sys.stdin.readline().split())))

    # Read B's movement data
    b_movements = []
    for _ in range(M):
        b_movements.append(list(map(int, sys.stdin.readline().split())))

    # Calculate the total time for the simulation.
    # The problem statement guarantees that A's total movement time
    # and B's total movement time are always the same.
    total_time = 0
    for _, t in a_movements:
        total_time += t

    # Initialize lists to store the cumulative positions of A and B at each second.
    # a_pos[i] will store A's total distance covered at the end of second i.
    # We need a size of total_time + 1 because we'll be indexing from 0 to total_time.
    a_pos = [0] * (total_time + 1)
    b_pos = [0] * (total_time + 1)

    # Populate a_pos list
    current_time_a = 0
    current_dist_a = 0
    for v, t in a_movements:
        for _ in range(t):
            current_time_a += 1
            current_dist_a += v
            if current_time_a <= total_time: # Ensure index is within bounds
                a_pos[current_time_a] = current_dist_a

    # Populate b_pos list
    current_time_b = 0
    current_dist_b = 0
    for v, t in b_movements:
        for _ in range(t):
            current_time_b += 1
            current_dist_b += v
            if current_time_b <= total_time: # Ensure index is within bounds
                b_pos[current_time_b] = current_dist_b

    # Variable to count leader changes
    leader_changes = 0

    # Determine the initial leader at time 1.
    # 'A' if A is ahead, 'B' if B is ahead, None if it's a tie.
    prev_leader = None

    if a_pos[1] > b_pos[1]:
        prev_leader = 'A'
    elif b_pos[1] > a_pos[1]:
        prev_leader = 'B'
    else:
        prev_leader = None # Tie at time 1

    # Iterate from time 2 up to the total simulation time
    for t in range(2, total_time + 1):
        current_leader = None

        # Determine the leader at the current time 't'
        if a_pos[t] > b_pos[t]:
            current_leader = 'A'
        elif b_pos[t] > a_pos[t]:
            current_leader = 'B'
        else:
            current_leader = None # It's a tie

        # Check for leader change based on the rules derived from the example:
        # A change is counted if:
        # 1. The previous leader was 'A' and the current leader is 'B'.
        # 2. The previous leader was 'B' and the current leader is 'A'.
        # 3. The previous state was a tie (None) and a clear leader ('A' or 'B') emerges.
        #    This means someone "took" the lead from a tied situation.
        # A change is NOT counted if:
        # - A clear leader becomes a tie (e.g., 'A' -> None). The lead is lost, but no one else "took" it.
        # - It was a tie and remains a tie (None -> None).

        if prev_leader == 'A' and current_leader == 'B':
            leader_changes += 1
        elif prev_leader == 'B' and current_leader == 'A':
            leader_changes += 1
        elif prev_leader is None and current_leader == 'A':
            leader_changes += 1
        elif prev_leader is None and current_leader == 'B':
            leader_changes += 1
        
        # Update prev_leader for the next iteration
        prev_leader = current_leader

    # Print the total number of leader changes
    sys.stdout.write(str(leader_changes) + "\n")

# Call the solve function to run the program
solve()