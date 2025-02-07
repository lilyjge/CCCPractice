n = int(input())
answers = []
for i in range(0, n):
    ans = input()
    answers.append(ans)
score = 0
for i in range(0, n):
    ans = input()
    if ans == answers[i]:
        score += 1
print(score)    