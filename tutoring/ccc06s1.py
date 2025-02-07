parent1 = input()
parent2 = input()
possible_genes = {'A': [], 'B': [], 'C': [], 'D': [], 'E': []}

for i in range(0, 5):
    # print(i)
    cur_gene = chr(i + ord('A'))
    if parent1[2 * i] == cur_gene or parent1[2 * i + 1] == cur_gene or parent2[2 * i] == cur_gene or parent2[2 * i + 1] == cur_gene:
        possible_genes[cur_gene].append(cur_gene)
    cur_gene = cur_gene.lower()
    if (parent1[2 * i] == cur_gene or parent1[2 * i + 1] == cur_gene) and (parent2[2 * i] == cur_gene or parent2[2 * i + 1] == cur_gene):
        possible_genes[cur_gene.upper()].append(cur_gene)
# print(possible_genes)
n = int(input())
for i in range(0, n):
    child = input()
    flag = True
    for c in child:
        index = c.upper()
        if not (c in possible_genes[index]):
            print("Not their baby!")
            flag = False
            break
    if flag:
        print("Possible baby.")
