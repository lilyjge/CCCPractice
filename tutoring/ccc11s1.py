n = int(input())
english = 0
french = 0
for i in range(0, n):
    text = input()
    for j in range(0, len(text)):
        if text[j] == 't' or text[j] == 'T':
            english += 1
        elif text[j] == 's' or text[j] == 'S':
            french += 1
if english > french:
    print("English")
else:
    print("French")