import csv

abertos = 0
total_horas = 0

with open("c-to-python-practice/chamados.csv", mode="r", encoding="utf-8") as arquivo:
    leitor = csv.DictReader(arquivo)

    for linha in leitor:
        if linha["status"] == "Aberto": 
            abertos += 1
            total_horas += int(linha["tempo_horas"])
            print(f"Chamado #{linha['id']} | Setor: {linha['setor']} | Tempo: {linha['tempo_horas']}h")

print(f"\nTotal de chamados abertos: {abertos}")
print(f"Tempo total dos chamados abertos: {total_horas}h")