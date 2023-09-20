n_string = input()

n = n_string[0]
k=  n_string[2]
arr_n = []
n_string2 = input()
element = n_string2.split()
for i in element:
    arr_n.append(int(i))

ref = arr_n[int(k)-1]
answer =0

for i in arr_n:
    if i<ref:
        break
    if i!=0:
        answer = answer +1

print(answer)