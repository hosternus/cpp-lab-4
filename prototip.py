def split_soup(n):

    if n * (n + 1) // 2 % 2 != 0:
        print("NO")
        return

    petya, masha = [], []

    # Идём с конца и добавляем числа в одну из групп
    for i in range(n, 0, -1):
        if sum(masha) > sum(petya):
            petya.append(i)
        else:
            masha.append(i)

    print("YES")
    print("petya", len(petya))
    print(" ".join(map(str, petya)))
    print("masha", len(masha))
    print(" ".join(map(str, masha)))


n = int(input())
split_soup(n)
