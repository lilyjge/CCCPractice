coldest = ""
mi = 300
while True:
    text = input().split()
    city = text[0]
    temp = int(text[1])
    if temp < mi:
        coldest = city
        mi = temp
    if city == "Waterloo":
        break
print(coldest)
