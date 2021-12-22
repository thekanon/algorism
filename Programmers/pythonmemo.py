#예약 비예약 배열 합침
booked = [["09:55", "hae"], ["10:05", "jee"]]
unbooked = [["10:04", "hee"], ["14:07", "eom"]]
a = booked+unbooked
#여러 요소 있는 배열 lambda 이용해 정렬하기
a.sort(key=lambda x:list(map(int, x[0].split(':'))))

a = ["marina", "josipa", "nikola", "vinko", "filipa"]
b = {}
for i in a :
    b[i]=0
# 20까지의 짝수를 출력하기 위해 다음과 같은 LC를 사용할 수 있다
evens = [x * 2 for x in range(11)]
# [0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20]

# 리스트의 모든 원소값을 정규화 시킨 후 상수값을 더하는 LC
vals = [32, 12, 96, 42, 32, 93, 31, 23, 65, 43, 76]
amount = sum(vals)
norm_and_move = [(x / amount) + 1 for x in vals]
# [1.0587155963302752, 1.0220183486238532, 1.1761467889908257, 1.0770642201834861, 1.0587155963302752, 1.1706422018348623, 1.0568807339449542, 1.0422018348623854, 1.1192660550458715, 1.0788990825688074, 1.1394495412844037]

# 두 리스트의 원소들의 모든 조합을 찾는 LC
epithets = ['sweet', 'annoying', 'cool', 'grey-eyed']
names = ['john', 'alice', 'james']
epithet_names = [(e, n) for e in epithets for n in names]
# [('sweet', 'john'), ('sweet', 'alice'), ('sweet', 'james'), ('annoying', 'john'), ('annoying', 'alice'), ('annoying', 'james'), ('cool', 'john'), ('cool', 'alice'), ('cool', 'james'), ('grey-eyed', 'john'), ('grey-eyed', 'alice'), ('grey-eyed', 'james')]

# a^2 + b^2 = c^2 (a < b < c)를 만족하는 피타고라스 방정식의 해를 찾는 LC
solutions = [(x, y, z) for x in range(1, 30) for y in range(x, 30) for z in range(y, 30) if x**2 + y**2 == z**2]
# [(3, 4, 5), (5, 12, 13), (6, 8, 10), (7, 24, 25), (8, 15, 17), (9, 12, 15), (10, 24, 26), (12, 16, 20), (15, 20, 25), (20, 21, 29)]

# 단어에서 모음을 제거하는 LC
word = 'mathematics'
without_vowels = ''.join([c for c in word if c not in ['a', 'e', 'i', 'o', 'u']])
# 'mthmtcs'

# 행렬을 일차원화 시키는 LC
matrix = [
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9, 10, 11, 12],
]
flatten = [e for r in matrix for e in r]
# [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]

#Counter 사용방법
from collections import Counter
Counter('hello world') 
# Counter({'l': 3, 'o': 2, 'h': 1, 'e': 1, ' ': 1, 'w': 1, 'r': 1, 'd': 1})

#zip 사용방법
numbers = [1, 2, 3]
letters = ["A", "B", "C"]
for pair in zip(numbers, letters):
    print(pair)
# (1, 'A')
# (2, 'B')
# (3, 'C')

# zip 사용 시 길이가 다른경우 짧은거 기준으로
numbers = ["1", "2", "3"]
letters = ["A"]
list(zip(numbers, letters))
[('1', 'A')]

# enumerate 사용방법
for i, letter in enumerate(['A', 'B', 'C']):
    print(i, letter)
# 0 A
# 1 B
# 2 C