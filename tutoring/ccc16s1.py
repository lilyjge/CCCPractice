s1 = input()
s2 = input()

if len(s1) != len(s2):
    print("N")
else:
    dict1 = {}
    dict2 = {}
    wildcards = 0
    for i in range(0, len(s1)):
        if s1[i] in dict1:
            dict1[s1[i]] += 1
        else:
            dict1[s1[i]] = 1
        if s2[i] == '*':
            wildcards += 1
        elif s2[i] in dict2:
            dict2[s2[i]] += 1
        else:
            dict2[s2[i]] = 1
    diff = 0
    good = True
    for key in dict2:
        if key in dict1:
            if dict2[key] > dict1[key]:
                good = False
                break
            else:
                diff += dict1[key] - dict2[key]
        else:
            good = False
            break
    # print(dict1)
    # print(dict2)
    if good:
        print("A")
    else:
        print("N")