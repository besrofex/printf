---

# **printf - Implémentation de printf en C**

## **📖 Description**

Le projet **printf** implémente une version personnalisée de la fonction standard `printf` en langage C. Cette bibliothèque permet de formater et d'afficher des données dans des formats variés. Elle prend en charge différents types de données comme les entiers, les chaînes de caractères, les caractères, et d'autres formats spécifiques comme les pointeurs.

L'objectif de ce projet est de répliquer le comportement de la fonction `printf` standard tout en ajoutant la gestion des formats suivants : `%d`, `%s`, `%c`, `%p`, `%x`, `%X`, et `%u`. Ce projet est une étape importante dans la compréhension de la gestion des formats et des arguments dans les fonctions en C.

---

## **🏆 Score**

Le projet a été validé avec un score de **100%**, ce qui signifie que toutes les fonctionnalités demandées ont été implémentées correctement et que toutes les fonctionnalités de formatage ont été testées avec succès.

---

## **⚙️ Installation**

1. **Cloner le dépôt GitHub :**
   ```bash
   git clone git@github.com:besrofex/printf.git
   cd printf
   ```

2. **Compiler la bibliothèque :**
   ```bash
   make
   ```

3. **Inclure la bibliothèque dans un projet personnel :**
   - Ajouter `libft.a` au fichier de compilation :
     ```bash
     gcc -Wall -Wextra -Werror main.c libft.a -o main
     ```

---

## **🚀 Fonctionnalités**

### **Formats pris en charge :**

| Format  | Description                        |
|---------|------------------------------------|
| `%d`    | Affiche un entier signé (int).     |
| `%s`    | Affiche une chaîne de caractères.  |
| `%c`    | Affiche un caractère.              |
| `%p`    | Affiche un pointeur mémoire.       |
| `%x`    | Affiche un entier en hexadécimal (en minuscules). |
| `%X`    | Affiche un entier en hexadécimal (en majuscules). |
| `%u`    | Affiche un entier non signé.       |

---

## **💻 Utilisation**

### **Exemple : Utilisation de `printf` personnalisé**

```c
#include "printf.h"

int main(void)
{
    int a = 42;
    char *str = "Hello, World!";

    // Exemple d'utilisation de différents formats
    ft_printf("Entier: %d\n", a);
    ft_printf("Chaîne: %s\n", str);
    ft_printf("Caractère: %c\n", 'A');
    ft_printf("Pointeur: %p\n", &a);
    ft_printf("Hexadécimal: %x\n", a);
    ft_printf("Hexadécimal maj: %X\n", a);
    ft_printf("Non signé: %u\n", a);

    return 0;
}
```

Compile avec :

```bash
gcc -Wall -Wextra -Werror main.c printf.a -o main
./main
```

---

## **✅ Résultat attendu**

```text
Entier: 42
Chaîne: Hello, World!
Caractère: A
Pointeur: 0x7ffecfcb1b8c
Hexadécimal: 2a
Hexadécimal maj: 2A
Non signé: 42
```

---

## **👨‍💻 Auteur**

- **Besrofex** - Développeur principal

---

## **📜 Licence**

Ce projet est sous licence MIT.

---
