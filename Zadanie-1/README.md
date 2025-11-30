# Program: "Wykrywacz palindromów"
Program napisany w języku C, który czyta tekst z klawiatury aż do naciśnięcia klawisza Enter i sprawdza, czy podany tekst jest palindromem. Program ignoruje spacje oraz nie jest czuły na wielkość liter.

---

## Informacje techniczne
- **Język:** C  
- **Edytor:** Microsoft Visual Studio Code  
- **Kompilator:** Clang (`clang -Wall`)  
- **System:** Windows  

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja
Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall Lab7_1.c
````


---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
Lab7_1.exe
```
Program poprosi o podanie tekstu i zakończenie go enterem. Następnie zwróci wynik:

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>Lab7_1.exe
Podaj tekst: Kajak
Jest palindromem.
```
```
C:\Users\X\Desktop\homework>Lab7_1.exe
Podaj tekst: piotr
Nie jest palindromem.

```

---

## Działanie programu

1. Program prosi o podanie tekstu i zakończenie go enterem.
2. Program wczytuje cały tekst do tablicy znaków.
3. Usuwa znak nowej linii zapisany przez fgets().
4. Porównuje znaki od początku i końca tekstu, pomijając spacje i ignorując wielkość liter.
5. Jeśli wszystkie odpowiadające znaki są zgodne, program zwraca „Jest palindromem”, w przeciwnym wypadku „Nie jest palindromem”.

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```
