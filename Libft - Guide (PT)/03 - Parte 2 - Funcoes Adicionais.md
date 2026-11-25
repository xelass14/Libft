---
tags: [42, libft, parte2, adicionais]
funcoes: "24-34"
---

# 🧰 Parte 2 — Funções Adicionais (24 → 34)

Anterior: [[02 - Parte 1 - Funcoes Libc]] · Seguinte: [[04 - Parte 3 - Listas Ligadas]] · [[00 - Indice Libft]]

> [!info] Contexto
> Funções que **não existem na libc**, ou existem de outra forma. Muitas das funções da Parte 1 são úteis aqui.
> Quase todas **alocam memória** → atenção a `NULL` quando `malloc` falha e a quem faz `free`.

**Legenda:** ⭐ muito fácil · ⭐⭐ fácil · ⭐⭐⭐ médio · ⭐⭐⭐⭐ difícil · ⭐⭐⭐⭐⭐ muito difícil

---

## 🟢 Bloco A — Escrever num file descriptor (⭐)

> Estas três usam **`write`** como única função externa. O `fd` pode ser 1 (stdout), 2 (stderr) ou qualquer descritor aberto.

### 24 · ft_putchar_fd
- **Dificuldade:** ⭐
- **Protótipo:** `void ft_putchar_fd(char c, int fd);`
- **O que faz:** escreve o caractere `c` no file descriptor `fd`.
- **Retorno:** nada.
- **Funções externas:** `write`
- **Atenção a:** `write` recebe um **endereço** e um nº de bytes (1).
- **Útil para:** [[#25 · ft_putstr_fd]], [[#26 · ft_putendl_fd]], [[#31 · ft_putnbr_fd]].
- [ ] feito  [ ] testado  [ ] norm

### 25 · ft_putstr_fd
- **Dificuldade:** ⭐
- **Protótipo:** `void ft_putstr_fd(char *s, int fd);`
- **O que faz:** escreve a string `s` no file descriptor `fd`.
- **Retorno:** nada.
- **Funções externas:** `write`
- **Atenção a:** `s == NULL` não deve causar crash; podes escrever tudo de uma vez se souberes o comprimento.
- **Depende de:** [[02 - Parte 1 - Funcoes Libc#08 · ft_strlen]] (opcional)
- [ ] feito  [ ] testado  [ ] norm

### 26 · ft_putendl_fd
- **Dificuldade:** ⭐
- **Protótipo:** `void ft_putendl_fd(char *s, int fd);`
- **O que faz:** escreve a string `s` no `fd` **seguida de uma nova linha** (`'\n'`).
- **Retorno:** nada.
- **Funções externas:** `write`
- **Depende de:** [[#25 · ft_putstr_fd]], [[#24 · ft_putchar_fd]]
- [ ] feito  [ ] testado  [ ] norm

---

## 🟡 Bloco B — Aplicar funções a strings (⭐⭐)

> Primeiro contacto com **ponteiros para função**.

### 27 · ft_striteri
- **Dificuldade:** ⭐⭐
- **Protótipo:** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- **O que faz:** percorre a string `s` e aplica `f` a cada caractere, passando o **índice** e o **endereço** do caractere (por isso `f` pode **modificar** a string original).
- **Retorno:** nada.
- **Funções externas:** nenhuma
- **Atenção a:** `s` ou `f` a `NULL`; o índice é `unsigned int`.
- [ ] feito  [ ] testado  [ ] norm

### 28 · ft_strmapi
- **Dificuldade:** ⭐⭐
- **Protótipo:** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- **O que faz:** cria uma **nova string** onde cada caractere é o resultado de `f(índice, caractere)` aplicado ao caractere correspondente de `s`. A original não é alterada.
- **Retorno:** a nova string, ou `NULL` se `malloc` falhar.
- **Funções externas:** `malloc`
- **Atenção a:** terminador `'\0'` na nova string; diferença para [[#27 · ft_striteri]]: aqui **devolve** uma string nova, ali **modifica in-place**.
- [ ] feito  [ ] testado  [ ] norm

---

## 🟠 Bloco C — Alocar e construir strings (⭐⭐⭐)

### 29 · ft_substr
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `char *ft_substr(char const *s, unsigned int start, size_t len);`
- **O que faz:** devolve uma **nova string** com, no máximo, `len` caracteres de `s`, a começar no índice `start`.
- **Retorno:** a substring, ou `NULL` se `malloc` falhar.
- **Funções externas:** `malloc`
- **Casos-limite importantes:**
  - `start` maior ou igual ao comprimento de `s` → deve devolver uma string **vazia** (alocada), não `NULL`;
  - `len` maior do que o que sobra a partir de `start` → copia só o que existe;
  - `s == NULL`.
- **Depende de:** [[02 - Parte 1 - Funcoes Libc#08 · ft_strlen]], [[02 - Parte 1 - Funcoes Libc#20 · ft_strlcpy]] ou [[02 - Parte 1 - Funcoes Libc#19 · ft_memcpy]]
- **Útil para:** [[#32 · ft_strtrim]], [[#34 · ft_split]]
- [ ] feito  [ ] testado  [ ] norm

### 30 · ft_strjoin
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `char *ft_strjoin(char const *s1, char const *s2);`
- **O que faz:** cria uma **nova string** resultante de concatenar `s1` seguida de `s2`.
- **Retorno:** a nova string, ou `NULL` se `malloc` falhar.
- **Funções externas:** `malloc`
- **Atenção a:** tamanho = len(s1) + len(s2) + 1; as originais não mudam.
- **Depende de:** [[02 - Parte 1 - Funcoes Libc#08 · ft_strlen]], [[02 - Parte 1 - Funcoes Libc#20 · ft_strlcpy]] / [[02 - Parte 1 - Funcoes Libc#21 · ft_strlcat]]
- [ ] feito  [ ] testado  [ ] norm

### 31 · ft_putnbr_fd
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `void ft_putnbr_fd(int n, int fd);`
- **O que faz:** escreve o inteiro `n` em texto no file descriptor `fd` (sem usar `printf`).
- **Retorno:** nada.
- **Funções externas:** `write`
- **Atenção a:**
  - números negativos (sinal `-`);
  - o valor **`INT_MIN` (-2147483648)** — não existe o seu positivo em `int`, é a armadilha clássica;
  - o número `0`;
  - os dígitos têm de sair pela ordem certa (do mais significativo para o menos).
- **Depende de:** [[#24 · ft_putchar_fd]]
- [ ] feito  [ ] testado  [ ] norm

---

## 🔴 Bloco D — Difíceis (⭐⭐⭐⭐ a ⭐⭐⭐⭐⭐)

### 32 · ft_strtrim
- **Dificuldade:** ⭐⭐⭐⭐
- **Protótipo:** `char *ft_strtrim(char const *s1, char const *set);`
- **O que faz:** devolve uma **cópia** de `s1` sem os caracteres pertencentes a `set` no **início** e no **fim** (só nas pontas, não no meio).
- **Retorno:** a string aparada, ou `NULL` se `malloc` falhar.
- **Funções externas:** `malloc`
- **Casos-limite importantes:**
  - `s1` composta só por caracteres de `set` → devolve string **vazia** (alocada);
  - `set` vazio → cópia integral de `s1`;
  - caracteres de `set` no meio da string **ficam**.
- **Ideia (conceptual):** descobrir onde começa e onde acaba a parte "útil" e depois copiar só essa fatia.
- **Depende de:** [[02 - Parte 1 - Funcoes Libc#11 · ft_strchr]], [[02 - Parte 1 - Funcoes Libc#08 · ft_strlen]], [[#29 · ft_substr]]
- [ ] feito  [ ] testado  [ ] norm

### 33 · ft_itoa
- **Dificuldade:** ⭐⭐⭐⭐
- **Protótipo:** `char *ft_itoa(int n);`
- **O que faz:** converte um inteiro numa **string** alocada (o inverso de `atoi`).
- **Retorno:** a string, ou `NULL` se `malloc` falhar.
- **Funções externas:** `malloc`
- **Casos-limite importantes:**
  - número negativo → inclui o sinal `-`;
  - **`0`** → `"0"`;
  - **`INT_MIN`** (mesma armadilha de [[#31 · ft_putnbr_fd]]);
  - calcular **quantos caracteres** vais precisar antes de alocar (dígitos + sinal + `'\0'`).
- **Ideia (conceptual):** contar dígitos → alocar → preencher a string de trás para a frente.
- **Relacionada com:** [[02 - Parte 1 - Funcoes Libc#16 · ft_atoi]]
- [ ] feito  [ ] testado  [ ] norm

### 34 · ft_split
- **Dificuldade:** ⭐⭐⭐⭐⭐ (a mais difícil da Parte 2 — e da Norma, por causa das 25 linhas)
- **Protótipo:** `char **ft_split(char const *s, char c);`
- **O que faz:** divide a string `s` em várias palavras usando o caractere `c` como delimitador.
- **Retorno:** array de strings **terminado em `NULL`**, ou `NULL` se alguma alocação falhar.
- **Funções externas:** `malloc`, `free`
- **Estrutura da memória:** cada palavra é alocada **independentemente** e o array de ponteiros também. Para libertar: `free` de cada string e depois `free` do array.
- **Casos-limite importantes:**
  - delimitadores **consecutivos** (não geram palavras vazias);
  - delimitadores no **início** e no **fim**;
  - string vazia ou só com delimitadores → array com apenas o `NULL` final;
  - **se um `malloc` falhar a meio, tens de libertar tudo o que já alocaste** antes de devolver `NULL` (sem leaks).
- **Ideia (conceptual):** (1) contar palavras; (2) alocar o array; (3) para cada palavra, medir e copiar. Ótimo candidato a **funções `static`** auxiliares (contar palavras, copiar palavra, libertar array) por causa do limite de linhas da Norma.
- **Depende de:** [[#29 · ft_substr]], [[02 - Parte 1 - Funcoes Libc#08 · ft_strlen]] (opcionais)
- [ ] feito  [ ] testado  [ ] norm
