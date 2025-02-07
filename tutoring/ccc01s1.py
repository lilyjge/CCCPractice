cards = input()
cardpts = {'A': 4, 'K': 3, 'Q': 2, 'J': 1}
suitpts = {0: 3, 1: 2, 2: 1}
curpts = 0 
num_cards = 0
tot = 0

print("Cards Dealt              Points")
prtstr = "Clubs "

for c in cards:
    if c in ['C', 'D', 'H', 'S']:
        if num_cards in suitpts and c != 'C':
            curpts += suitpts[num_cards]
        tot += curpts
        if c != 'C':
            prtstr += str(curpts)
            print(prtstr)
        if c == 'H':
            prtstr = "Hearts "
        elif c == 'D':
            prtstr = "Diamonds "
        elif c == 'S':
            prtstr = "Spades "
        curpts = 0 
        num_cards = 0
    else:
        num_cards += 1
        if c in cardpts:
            curpts += cardpts[c]
        prtstr += c + " "

if num_cards in suitpts and c != 'C':
    curpts += suitpts[num_cards]
tot += curpts  
prtstr += str(curpts)
print(prtstr)
print("          Total " + str(tot))
