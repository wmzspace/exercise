#https://www.lanqiao.cn/problems/504/learning/
str = input()
dict = {}
for ch in str:
    if ch in dict:
        dict[ch] += 1
    else:
        dict.update( {ch: 1})
print(max(sorted(dict),key=dict.get))
print(max(dict.values()))