def binary_search(arr, x):
    sol = 0
    sag = len(arr) - 1
    while sol <= sag:
        orta = sol + (sag - sol) // 2
        if arr[orta] == x:
            return orta
        elif arr[orta] < x:
            sol = orta + 1
        else:
            sag = orta - 1
    return -1

# Örnek kullanım
dizi = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
aranan_eleman = 12

sonuc = binary_search(dizi, aranan_eleman)

if sonuc != -1:
    print(f"Aranan eleman {sonuc}. indiste bulundu.")
else:
    print("Aranan eleman dizide bulunamadı.")