cmds = input()
h = 0
v = 0
for i in range(len(cmds)):
    if cmds[i] == "H":
        h += 1
    else:
        v += 1
if h % 2 == 0 and v % 2 == 0:
    print("1 2\n3 4")
elif h % 2 == 0 and v % 2 == 1:
    print("2 1\n4 3")
elif h % 2 == 1 and v % 2 == 0:
    print("3 4\n1 2")
else:
    print("4 3\n2 1")