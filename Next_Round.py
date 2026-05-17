n, k = map(int, input().split())
a = list(map(int, input().split()))


n_participant = 0

for i in a:
    if i >= a[k - 1] and i > 0:
        n_participant += 1

print(n_participant)