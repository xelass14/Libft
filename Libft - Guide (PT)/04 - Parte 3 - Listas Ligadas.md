---
tags: [42, libft, parte3, listas]
funcoes: "35-43"
---
45
# 🔗 Parte 3 — Listas Ligadas (35 → 43)

Anterior: [[03 - Parte 2 - Funcoes Adicionais]] · [[00 - Indice Libft]]

## 📦 A estrutura `t_list`

Tens de **adicionar esta declaração ao `libft.h`**:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Membro | Significado |
|---|---|
| `content` | Os dados do nó. `void *` permite guardar **qualquer tipo** de dados |
| `next` | Endereço do **próximo nó**, ou `NULL` se for o último |

## 🧠 Conceitos a perceber antes de começar

> [!info] Ponteiro simples vs ponteiro duplo (`t_list *` vs `t_list **`)
> - `t_list *lst` → recebes **o endereço do primeiro nó** (podes ler a lista, mas não consegues mudar *qual é* a cabeça na função de quem chamou).
> - `t_list **lst` → recebes **o endereço do ponteiro da cabeça** → consegues **alterar a cabeça** da lista (necessário quando adicionas à frente, adicionas a uma lista vazia, ou limpas a lista).

> [!info] Lista vazia
> Uma lista vazia é simplesmente um ponteiro para a cabeça igual a `NULL`.
> Quase todas as funções devem comportar-se bem com `NULL`.

> [!info] Ponteiros para função
> `del` e `f` são funções que **tu não escreves** — vêm de quem usa a lista. Por isso o conteúdo é `void *`: só quem criou o conteúdo sabe como o libertar ou transformar.

**Legenda:** ⭐ muito fácil · ⭐⭐ fácil · ⭐⭐⭐ médio · ⭐⭐⭐⭐ difícil · ⭐⭐⭐⭐⭐ muito difícil

---

## 🔢 Funções (da mais fácil para a mais difícil)

### 35 · ft_lstnew
- **Dificuldade:** ⭐
- **Protótipo:** `t_list *ft_lstnew(void *content);`
- **O que faz:** cria (aloca) um **novo nó**; guarda `content` no nó e põe `next` a `NULL`.
- **Retorno:** ponteiro para o novo nó (ou `NULL` se `malloc` falhar).
- **Funções externas:** `malloc`
- **Atenção a:** o nó **não copia** o conteúdo, apenas guarda o ponteiro.
- **Útil para:** praticamente todas as outras (sobretudo [[#43 · ft_lstmap]]).
- [ ] feito  [ ] testado  [ ] norm

---

### 36 · ft_lstadd_front
- **Dificuldade:** ⭐⭐
- **Protótipo:** `void ft_lstadd_front(t_list **lst, t_list *new);`
- **O que faz:** adiciona o nó `new` **no início** da lista.
- **Retorno:** nada.
- **Funções externas:** nenhuma
- **Ideia (conceptual):** o novo nó passa a apontar para a antiga cabeça, e a cabeça da lista passa a ser o novo nó. A **ordem** destas duas operações importa (senão perdes a lista).
- **Atenção a:** lista vazia; `lst` ou `new` a `NULL`.
- [ ] feito  [ ] testado  [ ] norm

---

### 37 · ft_lstsize
- **Dificuldade:** ⭐⭐
	- **Protótipo:** `unsigned int ft_lstsize(t_list *lst);`
- **O que faz:** conta quantos nós tem a lista.
- **Retorno:** o número de nós (0 se a lista estiver vazia).
- **Funções externas:** nenhuma
- **Atenção a:** o tipo de retorno neste subject é **`unsigned int`** (confirma que o teu protótipo no `.h` é exatamente igual).
- [ ] feito  [ ] testado  [ ] norm

---

### 38 · ft_lstlast
- **Dificuldade:** ⭐⭐
- **Protótipo:** `t_list *ft_lstlast(t_list *lst);`
- **O que faz:** devolve o **último nó** da lista (aquele cujo `next` é `NULL`).
- **Retorno:** o último nó; `NULL` se a lista estiver vazia.
- **Funções externas:** nenhuma
- **Útil para:** [[#39 · ft_lstadd_back]].
- [ ] feito  [ ] testado  [ ] norm

---

### 39 · ft_lstadd_back
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `void ft_lstadd_back(t_list **lst, t_list *new);`
- **O que faz:** adiciona o nó `new` **no fim** da lista.
- **Retorno:** nada.
- **Funções externas:** nenhuma
- **Atenção a:** se a lista estiver **vazia**, o novo nó passa a ser a cabeça (é por isso que recebes `**`); caso contrário liga o último nó ao novo.
- **Depende de:** [[#38 · ft_lstlast]]
- [ ] feito  [ ] testado  [ ] norm

---

### 40 · ft_lstdelone
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- **O que faz:** liberta **um único nó**: primeiro apaga o conteúdo com `del`, depois faz `free` do próprio nó.
- **Retorno:** nada.
- **Funções externas:** `free`
- **Atenção a:** **não** mexe nem liberta o nó seguinte (`next`); atenção a `NULL` em `lst` ou `del`.
- **Útil para:** [[#42 · ft_lstclear]], [[#43 · ft_lstmap]].
- [ ] feito  [ ] testado  [ ] norm

---

### 41 · ft_lstiter
- **Dificuldade:** ⭐⭐⭐
- **Protótipo:** `void ft_lstiter(t_list *lst, void (*f)(void *));`
- **O que faz:** percorre a lista e aplica a função `f` ao **conteúdo** de cada nó.
- **Retorno:** nada.
- **Funções externas:** nenhuma
- **Atenção a:** `f` recebe o `content` (não o nó); lista vazia / `f == NULL`.
- [ ] feito  [ ] testado  [ ] norm

---

### 42 · ft_lstclear
- **Dificuldade:** ⭐⭐⭐⭐
- **Protótipo:** `void ft_lstclear(t_list **lst, void (*del)(void *));`
- **O que faz:** apaga e liberta **o nó dado e todos os seguintes**, usando `del` para o conteúdo e `free` para os nós. No fim põe o ponteiro da lista a `NULL`.
- **Retorno:** nada.
- **Funções externas:** `free`
- **Armadilha clássica:** depois de libertares um nó, já não podes ler o `next` dele → tens de **guardar o próximo antes de libertar**.
- **Atenção a:** o `*lst = NULL` final (evita ponteiros "pendurados"); lista já vazia.
- **Depende de:** [[#40 · ft_lstdelone]]
- [ ] feito  [ ] testado  [ ] norm

---

### 43 · ft_lstmap
- **Dificuldade:** ⭐⭐⭐⭐⭐ (a mais difícil de todo o projeto em termos de gestão de memória)
- **Protótipo:** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
- **O que faz:** percorre `lst`, aplica `f` ao conteúdo de cada nó e constrói uma **nova lista** com os resultados. A lista original **não é alterada**.
- **Retorno:** a nova lista, ou `NULL` se alguma alocação falhar.
- **Funções externas:** `malloc`, `free`
- **O papel de `del`:** só é usado se algo correr mal a meio — nesse caso tens de **limpar a nova lista já construída** e devolver `NULL`.
- **Atenção a (fonte de leaks!):**
  - se `f` já produziu um conteúdo novo mas **`ft_lstnew` falha**, esse conteúdo também tem de ser libertado com `del`;
  - falha a meio da lista → libertar **tudo** o que já foi criado;
  - lista vazia / `f` ou `del` a `NULL`.
- **Depende de:** [[#35 · ft_lstnew]], [[#39 · ft_lstadd_back]], [[#42 · ft_lstclear]], [[#40 · ft_lstdelone]]
- [ ] feito  [ ] testado  [ ] norm

---

## 🧪 Ideias de testes para a Parte 3
- Lista com 0, 1 e vários nós.
- Conteúdo em memória alocada (ex.: `strdup`) → verifica leaks com `valgrind`.
- `del` que faz `free`; `f` que devolve novo conteúdo alocado.
- Simular falha de `malloc` (para testar o `lstmap`) — opcional, mas ótimo para perceber os leaks.
