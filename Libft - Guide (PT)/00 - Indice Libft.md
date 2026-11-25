---
tags:
  - libft
  - indice
projeto: Libft
versao-subject: 19.3
---

# 📚 Libft — Índice

> *Your very first own library* — uma biblioteca em C com funções de uso geral, criada por ti.
> Resultado final: **`libft.a`** na raiz do repositório, criada com **`ar`** (nunca `libtool`).

## 🗺️ Mapa do projeto

| Nota                                  | Conteúdo                                                    | Funções (nº) |
|-------------------------------------- | ----------------------------------------------------------- | ------------ |
| [[01 - Regras e Requisitos]]          | Norma, Makefile, README, regras de IA, entrega              | —            |
| [[02 - Parte 1 - Funcoes Libc]]       | Reimplementar funções da libc (prefixo `ft_`)               | **01 → 23**  |
| [[03 - Parte 2 - Funcoes Adicionais]] | Funções que não existem na libc (ou existem de outra forma) | **24 → 34**  |
| [[04 - Parte 3 - Listas Ligadas]]     | Funções sobre `t_list`                                      | **35 → 43**  |

> [!tip] Como usar os números
> Cada função tem um **número global (01–43)**, ordenado da **mais fácil para a mais difícil dentro de cada parte**.
> Para me perguntares mais tarde basta dizeres, por exemplo: *"explica melhor a função 22"* ou *"tenho dúvidas na 34"*.

## 🔢 Lista rápida de todas as funções

### Parte 1 — Libc
| Nº | Função | Dificuldade |
|---|---|---|
| 01 | ft_isascii | ⭐ |
| 02 | ft_isdigit | ⭐ |
| 03 | ft_isalpha | ⭐ |
| 04 | ft_isalnum | ⭐ |
| 05 | ft_isprint | ⭐ |
| 06 | ft_toupper | ⭐ |
| 07 | ft_tolower | ⭐ |
| 08 | ft_strlen | ⭐ |
| 09 | ft_bzero | ⭐⭐ |
| 10 | ft_memset | ⭐⭐ |
| 11 | ft_strchr | ⭐⭐ |
| 12 | ft_strrchr | ⭐⭐ |
| 13 | ft_strncmp | ⭐⭐ |
| 14 | ft_memchr | ⭐⭐ |
| 15 | ft_memcmp | ⭐⭐ |
| 16 | ft_atoi | ⭐⭐⭐ |
| 17 | ft_strdup | ⭐⭐⭐ |
| 18 | ft_calloc | ⭐⭐⭐ |
| 19 | ft_memcpy | ⭐⭐⭐ |
| 20 | ft_strlcpy | ⭐⭐⭐⭐ |
| 21 | ft_strlcat | ⭐⭐⭐⭐ |
| 22 | ft_memmove | ⭐⭐⭐⭐ |
| 23 | ft_strnstr | ⭐⭐⭐⭐ |

### Parte 2 — Adicionais
| Nº | Função | Dificuldade |
|---|---|---|
| 24 | ft_putchar_fd | ⭐ |
| 25 | ft_putstr_fd | ⭐ |
| 26 | ft_putendl_fd | ⭐ |
| 27 | ft_striteri | ⭐⭐ |
| 28 | ft_strmapi | ⭐⭐ |
| 29 | ft_substr | ⭐⭐⭐ |
| 30 | ft_strjoin | ⭐⭐⭐ |
| 31 | ft_putnbr_fd | ⭐⭐⭐ |
| 32 | ft_strtrim | ⭐⭐⭐⭐ |
| 33 | ft_itoa | ⭐⭐⭐⭐ |
| 33 | ft_split | ⭐⭐⭐⭐⭐ |
| 34 | ft_strmapi | ⭐⭐ |

### Parte 3 — Listas
| Nº | Função | Dificuldade |
|---|---|---|
| 35 | ft_lstnew | ⭐ |
| 36 | ft_lstadd_front | ⭐⭐ |
| 37 | ft_lstsize | ⭐⭐ |
| 38 | ft_lstlast | ⭐⭐ |
| 39 | ft_lstadd_back | ⭐⭐⭐ |
| 40 | ft_lstdelone | ⭐⭐⭐ |
| 41 | ft_lstiter | ⭐⭐⭐ |
| 41 | ft_lstclear | ⭐⭐⭐⭐ |
| 43 | ft_lstmap | ⭐⭐⭐⭐⭐ |

## ✅ Progresso geral
- [ ] Parte 1 completa (23 funções)
- [ ] Parte 2 completa (11 funções)
- [ ] Parte 3 completa (9 funções)
- [ ] `libft.h` com todos os protótipos + `t_list`
- [ ] Makefile (NAME, all, clean, fclean, re) sem relink
- [ ] Norminette em todos os ficheiros
- [ ] Testes próprios (não são entregues)
- [ ] README.md conforme o subject
93. - [ ] Sem leaks / sem crashes (exceto comportamento indefinido)

---

> [!tip] Como usar os números
> Cada função tem um **número global (01–43)**, ordenado da **mais fácil para a mais difícil dentro de cada parte**.
> Para me perguntares mais tarde basta dizeres, por exemplo: *"explica melhor a função 22"* ou *"tenho dúvidas na 34"*.