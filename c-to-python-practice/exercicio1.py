soma = 0.0
i = 1

while i <= 3:
    nota = float(input(f"Digite a nota {i} (0 a 10): "))

    if nota >= 0 and nota <= 10:
        soma = soma + nota
        i += 1
    else:
        print("Nota invalida! Tente novamente.")

media = soma / 3.0
print(f"Media: {media:.2f}")

if media >= 7.0:
    print("Approved")
elif media >= 5.0:
    print("Recovery")
else:
    print("Failed")