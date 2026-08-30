n = int(input("Entrer un nombre : "))

if n < 2:
    print("Ce nombre n'est pas premier")
else:
    premier = True

    for i in range(2, n):
        if n % i == 0:
            premier = False
            break

    if premier:
        print("Ce nombre est premier")
    else:
        print("Ce nombre n'est pas premier ")