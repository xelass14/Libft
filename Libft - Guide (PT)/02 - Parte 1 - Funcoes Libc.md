---
tags: [42, libft, parte1, libc]
funcoes: "01-23"
---

# 🧱 Parte 1 — Funções da Libc (01 → 23)

Voltar ao [[00 - Indice Libft]] · Seguinte: [[03 - Parte 2 - Funcoes Adicionais]]

> [!info] Regras desta parte
> - Mesmo protótipo e comportamento do **man page**, só muda o nome (`ft_` + nome).
> - **Sem `restrict`** nos protótipos e **sem `-std=c99`**.
> - **Sem funções externas** (só `malloc` em `calloc` e `strdup`).
> - Funções `is*` → devolvem **1** (pertence) ou **0** (não pertence).
> - Para comparar com a versão do sistema: `<bsd/string.h>` + `-lbsd` (strlcpy, strlcat, bzero em glibc).

**Legenda de dificuldade:** ⭐ muito fácil · ⭐⭐ fácil · ⭐⭐⭐ médio · ⭐⭐⭐⭐ difícil

---

## 🟢 Bloco A — Classificação de caracteres (⭐)

### 01 · ft_isascii
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_isascii(int c);`
- **O que faz:** verifica se `c` é um caractere ASCII válido (valores 0 a 127).
- **Retorno:** 1 se for ASCII, 0 caso contrário.
- **Atenção a:** limites do intervalo (0 e 127 incluídos); valores negativos.
- **Útil para:** primeiro contacto com a Norma e o Makefile.
- [ ] feito  [ ] testado  [ ] norm

### 02 · ft_isdigit
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_isdigit(int c);`
- **O que faz:** verifica se `c` é um dígito decimal (`'0'` a `'9'`).
- **Retorno:** 1 se for dígito, 0 caso contrário.
- **Atenção a:** comparar com os caracteres, não com os números 0–9.
- **Útil para:** [[#04 · ft_isalnum]], [[#16 · ft_atoi]].
- [ ] feito  [ ] testado  [ ] norm

### 03 · ft_isalpha
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_isalpha(int c);`
- **O que faz:** verifica se `c` é uma letra (maiúscula `A–Z` ou minúscula `a–z`).
- **Retorno:** 1 se for letra, 0 caso contrário.
- **Atenção a:** são **dois** intervalos separados na tabela ASCII.
- **Útil para:** [[#04 · ft_isalnum]].
- [ ] feito  [ ] testado  [ ] norm

### 04 · ft_isalnum
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_isalnum(int c);`
- **O que faz:** verifica se `c` é alfanumérico (letra **ou** dígito).
- **Retorno:** 1 se for, 0 caso contrário.
- **Atenção a:** podes reutilizar 02 e 03 (a Parte 1 não proíbe usar as tuas próprias funções).
- **Depende de:** [[#02 · ft_isdigit]], [[#03 · ft_isalpha]]
- [ ] feito  [ ] testado  [ ] norm

### 05 · ft_isprint
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_isprint(int c);`
- **O que faz:** verifica se `c` é imprimível (inclui o espaço; vai de 32 a 126).
- **Retorno:** 1 se for imprimível, 0 caso contrário.
- **Atenção a:** 127 (DEL) **não** é imprimível; o espaço (32) **é**.
- [ ] feito  [ ] testado  [ ] norm

---

## 🟢 Bloco B — Conversão de maiúsculas/minúsculas (⭐)

### 06 · ft_toupper
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_toupper(int c);`
- **O que faz:** converte uma letra minúscula na maiúscula correspondente.
- **Retorno:** a maiúscula se `c` for minúscula; senão devolve `c` inalterado.
- **Atenção a:** só mexe em `a–z`; tudo o resto fica igual. Recebe e devolve `int`.
- **Útil para:** funções que processam strings.
- [ ] feito  [ ] testado  [ ] norm

### 07 · ft_tolower
- **Dificuldade:** ⭐
- **Protótipo:** `int ft_tolower(int c);`
- **O que faz:** o inverso de `toupper`: converte maiúscula em minúscula.
- **Retorno:** a minúscula se `c` for maiúscula; senão devolve `c` inalterado.
- **Atenção a:** só mexe em `A–Z`.
- [ ] feito  [ ] testado  [ ] norm

---

## 🟡 Bloco C — Strings simples e memória básica (⭐ a ⭐⭐)

### 08 · ft_strlen
- **Dificuldade:** ⭐
- **Protótipo:** `size_t ft_strlen(const char *s);`
- **O que faz:** conta quantos caracteres tem a string **antes** do `'\0'`.
- **Retorno:** o comprimento (`size_t`), sem contar o terminador.
- **Atenção a:** o `'\0'` não conta; o tipo de retorno é `size_t`.
- **Útil para:** praticamente todas as funções de strings seguintes.
- [ ] feito  [ ] testado  [ ] norm

### 09 · ft_bzero
- **Dificuldade:** ⭐⭐
- **Protótipo:** `void ft_bzero(void *s, size_t n);`
- **O que faz:** escreve `n` bytes a zero (`0`, não `'0'`) a partir de `s`.
- **Retorno:** nada.
- **Atenção a:** trabalhar byte a byte (`void *` não permite aritmética direta); `n == 0` não faz nada.
- **Nota:** em glibc pode precisar de `<bsd/string.h>` para testar.
- **Relacionada com:** [[#10 · ft_memset]] (é um caso particular).
- [ ] feito  [ ] testado  [ ] norm

### 10 · ft_memset
- **Dificuldade:** ⭐⭐
- **Protótipo:** `void *ft_memset(void *s, int c, size_t n);`
- **O que faz:** preenche os primeiros `n` bytes de `s` com o valor `c`.
- **Retorno:** o ponteiro `s` original.
- **Atenção a:** `c` é convertido para `unsigned char`; o retorno é o ponteiro de **início**, não o que foi avançando.
- **Útil para:** [[#18 · ft_calloc]].
- [ ] feito  [ ] testado  [ ] norm

### 11 · ft_strchr
- **Dificuldade:** ⭐⭐
- **Protótipo:** `char *ft_strchr(const char *s, int c);`
- **O que faz:** procura a **primeira** ocorrência do caractere `c` na string `s`.
- **Retorno:** ponteiro para essa posição, ou `NULL` se não existir.
- **Atenção a:** procurar `'\0'` deve devolver um ponteiro para o **terminador** da string; `c` é tratado como `char`.
- **Útil para:** [[#32 · ft_strtrim]] (Parte 2).
- [ ] feito  [ ] testado  [ ] norm

### 12 · ft_strrchr
- **Dificuldade:** ⭐⭐
- **Protótipo:** `char *ft_strrchr(const char *s, int c);`
- **O que faz:** igual a `strchr`, mas devolve a **última** ocorrência.
- **Retorno:** ponteiro para a última ocorrência, ou `NULL`.
- **Atenção a:** também deve encontrar o `'\0'` final; pensa se queres percorrer do início ou do fim.
- [ ] feito  [ ] testado  [ ] norm

### 13 · ft_strncmp
- **Dificuldade:** ⭐⭐
- **Protótipo:** `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- **O que faz:** compara no máximo `n` caracteres de duas strings.
- **Retorno:** `0` se iguais; valor negativo/positivo conforme a primeira diferença (`s1` menor/maior).
- **Atenção a:** parar no `'\0'`; comparar como **`unsigned char`**; `n == 0` devolve 0.
- **Útil para:** [[#23 · ft_strnstr]].
- [ ] feito  [ ] testado  [ ] norm

### 14 · ft_memchr
- **Dificuldade:** ⭐⭐
- **Protótipo:** `void *ft_memchr(const void *s, int c, size_t n);`
- **O que faz:** procura o byte `c` nos primeiros `n` bytes de memória.
- **Retorno:** ponteiro para a primeira ocorrência, ou `NULL`.
- **Atenção a:** **não pára no `'\0'`** (é memória, não string); `c` tratado como `unsigned char`.
- [ ] feito  [ ] testado  [ ] norm

### 15 · ft_memcmp
- **Dificuldade:** ⭐⭐
- **Protótipo:** `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- **O que faz:** compara `n` bytes de duas zonas de memória.
- **Retorno:** `0` se iguais; diferença (negativa/positiva) no primeiro byte diferente.
- **Atenção a:** **não pára no `'\0'`**; comparar como `unsigned char`; `n == 0` devolve 0.
- [ ] feito  [ ] testado  [ ] norm

---

## 🟠 Bloco D — Conversão e alocação (⭐⭐⭐)

### 16 · ft_atoi
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `int ft_atoi(const char *nptr);`
- **O que faz:** converte o início de uma string num `int`.
- **Comportamento (como no man page):**
  1. ignora espaços em branco iniciais (espaço, `\t`, `\n`, `\v`, `\f`, `\r`);
  2. aceita um sinal opcional (`+` ou `-`);
  3. lê dígitos até encontrar um caractere que não seja dígito.
- **Retorno:** o número convertido (0 se não houver dígitos).
- **Atenção a:** só **um** sinal; sem tratamento de erros nem overflow (comportamento indefinido).
- **Depende de / usa:** [[#02 · ft_isdigit]] (opcional).
- [ ] feito  [ ] testado  [ ] norm

### 17 · ft_strdup
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `char *ft_strdup(const char *s);`
- **O que faz:** cria uma **cópia nova** da string `s` em memória alocada.
- **Retorno:** ponteiro para a cópia, ou `NULL` se `malloc` falhar.
- **Funções externas:** `malloc`
- **Atenção a:** reservar espaço para o `'\0'` (comprimento + 1); quem chama é que faz `free`.
- **Depende de:** [[#08 · ft_strlen]]
- [ ] feito  [ ] testado  [ ] norm

### 18 · ft_calloc
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `void *ft_calloc(size_t nmemb, size_t size);`
- **O que faz:** aloca memória para `nmemb` elementos de `size` bytes cada e **inicializa tudo a zero**.
- **Retorno:** ponteiro para a memória, ou `NULL` se falhar.
- **Funções externas:** `malloc`
- **Atenção a:**
  - **regra do subject:** se `nmemb` ou `size` for 0, devolve um ponteiro **único** que possa ir a `free()`;
  - a multiplicação `nmemb * size` pode **dar overflow** → deves detetar e devolver `NULL`.
- **Depende de:** [[#09 · ft_bzero]] ou [[#10 · ft_memset]]
- [ ] feito  [ ] testado  [ ] norm

### 19 · ft_memcpy
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `void *ft_memcpy(void *dst, const void *src, size_t n);`
- **O que faz:** copia `n` bytes de `src` para `dst`.
- **Retorno:** o ponteiro `dst` original.
- **Atenção a:** se as zonas se **sobrepõem** o comportamento é indefinido (para isso existe `memmove`); casos com `NULL` e `n > 0` são comportamento indefinido.
- **Útil para:** [[#22 · ft_memmove]], Parte 2 (substr, strjoin…).
- [ ] feito  [ ] testado  [ ] norm

---

## 🔴 Bloco E — As mais difíceis (⭐⭐⭐⭐)

### 20 · ft_strlcpy
- **Dificuldade:** ⭐⭐⭐⭐
- **Protótipo:** `size_t ft_strlcpy(char *dst, const char *src, size_t size);`
- **O que faz:** copia `src` para `dst` sem exceder o tamanho total `size` do buffer, garantindo `'\0'` no fim (se `size > 0`).
- **Retorno:** o **comprimento de `src`** (o que *tentou* copiar), não o que foi realmente copiado → permite detetar truncamento.
- **Atenção a:**
  - copia no máximo `size - 1` caracteres;
  - `size == 0` → não escreve nada, mas continua a devolver `strlen(src)`;
  - o retorno é sempre o tamanho de `src`.
- **Nota:** em glibc, usa `<bsd/string.h>` + `-lbsd` para testar.
- **Depende de:** [[#08 · ft_strlen]]
- [ ] feito  [ ] testado  [ ] norm

### 21 · ft_strlcat
- **Dificuldade:** ⭐⭐⭐⭐ (a mais traiçoeira dos casos-limite)
- **Protótipo:** `size_t ft_strlcat(char *dst, const char *src, size_t size);`
- **O que faz:** concatena `src` ao fim de `dst`, sem ultrapassar `size` bytes no total e terminando com `'\0'`.
- **Retorno:** o comprimento que a string final **teria** se não houvesse truncamento:
  `min(size, strlen(dst)) + strlen(src)`.
- **Atenção a:**
  - se `size` for **menor ou igual** ao comprimento atual de `dst`, não concatena nada;
  - `dst` precisa de ter `'\0'` dentro dos primeiros `size` bytes para o cálculo fazer sentido;
  - cuidado com `size - strlen(dst) - 1` quando dá valores negativos em `size_t`.
- **Depende de:** [[#08 · ft_strlen]]
- [ ] feito  [ ] testado  [ ] norm

### 22 · ft_memmove
- **Dificuldade:** ⭐⭐⭐⭐
- **Protótipo:** `void *ft_memmove(void *dst, const void *src, size_t len);`
- **O que faz:** copia `len` bytes de `src` para `dst`, **funcionando corretamente mesmo se as zonas se sobrepõem**.
- **Retorno:** o ponteiro `dst`.
- **Ideia-chave (conceptual):** a **direção da cópia** depende da posição relativa de `dst` e `src` — por vezes tens de copiar do início para o fim, outras do fim para o início, para não "estragares" bytes que ainda não copiaste.
- **Atenção a:** `dst == src`; `len == 0`; `NULL`.
- **Relacionada com:** [[#19 · ft_memcpy]]
- [ ] feito  [ ] testado  [ ] norm

### 23 · ft_strnstr
- **Dificuldade:** ⭐⭐⭐⭐
- **Protótipo:** `char *ft_strnstr(const char *big, const char *little, size_t len);`
- **O que faz:** procura a primeira ocorrência da substring `little` dentro de `big`, mas **olhando no máximo para `len` caracteres** de `big`.
- **Retorno:**
  - se `little` for string vazia → devolve `big`;
  - se encontrar → ponteiro para o início da ocorrência em `big`;
  - se não encontrar → `NULL`.
- **Atenção a:**
  - a ocorrência tem de **caber completamente** nos primeiros `len` caracteres;
  - parar também no `'\0'` de `big`;
  - evitar ler fora dos limites.
- **Depende de:** [[#08 · ft_strlen]], [[#13 · ft_strncmp]]
- [ ] feito  [ ] testado  [ ] norm
