def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False  # Yer değiştirme olup olmadığını takip etmek için bir değişken
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True  # Yer değiştirme oldu
        # Eğer bu adımda hiç yer değiştirme olmadıysa, liste zaten sıralıdır, döngüyü sonlandır
        if not swapped:
            break

# Örnek kullanım
dizi = [64, 34, 25, 12, 22, 11, 90]

bubble_sort(dizi)

print("Sıralanmış dizi:")
for eleman in dizi:
    print(eleman)