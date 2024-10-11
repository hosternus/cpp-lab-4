n = int(input())
miski = [i+1 for i in range(n)]

print(miski)

def f(miski):
    if sum(miski) % 2 != 0:
        print("NO")
        return
    
    print("YES")

    porcia = sum(miski) // 2

    masha = []

    while sum(masha) < porcia:
        masha.append(miski.pop(0))

    print(masha)
    print(miski)

    return


f(miski)

# YES
# 36
# 39
# 40
# 43
# 44
# 47
# 48
# 51



# NO
# 6
# 9
# 10
# 13
# 14
# 17
# 18
# 26
# 29
# 33
# 34