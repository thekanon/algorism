from functools import cmp_to_key
class Player:
    def __init__(self, name, score):
        self.name = name 
        self.score = score
        
    def __repr__(self):
        return "{} {}".format(self.name, self.score)

    def comparator(a, b):
        if a.score == b.score: 
            if a.name > b.name: 
                return 1 
            else: return -1 
        else: return b.score - a.score
# n = int(input())
data = []
data.append(Player('amy', 100))
data.append(Player('david', 100))
data.append(Player('heraldo', 50))
data.append(Player('aakansha', 75))
data.append(Player('aleksa', 150))

a =  sorted(data, key=lambda dd: dd.score, reverse=True)

print(a)