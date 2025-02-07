plaintext = input()
cypher = input()

key = {}
for i in range(0, len(cypher)):
    if not (cypher[i] in key):
        key[cypher[i]] = plaintext[i]

text = input()
to_print = ""
for c in text:
    if c in key:
        to_print += key[c]
    else:
        to_print += "."
print(to_print)
