---
tags: [42, libft, regras]
---

# 📏 Regras e Requisitos

Voltar ao [[00 - Indice Libft]]

## 1. Informação geral do projeto
| Campo | Valor |
|---|---|
| Nome do programa | `libft.a` |
| Ficheiros a entregar | `Makefile`, `libft.h`, `ft_*.c` |
| Regras do Makefile | `NAME`, `all`, `clean`, `fclean`, `re` |
| Libft autorizada | n/a |
| Parte bónus | **Não existe** nesta versão (19.3) |

## 2. Considerações técnicas (cap. IV.1)
- [ ] **Proibido** declarar variáveis globais
- [ ] Funções auxiliares → **`static`** (âmbito limitado ao ficheiro)
- [ ] Todos os ficheiros **na raiz** do repositório
- [ ] **Proibido** entregar ficheiros não usados
- [ ] Todos os `.c` compilam com `-Wall -Wextra -Werror` (usando `cc`)
- [ ] Biblioteca criada com **`ar`** — `libtool` está **proibido**
- [ ] `libft.a` criada **na raiz** do repositório

> [!warning] Sobre `restrict`
> Alguns protótipos da libc usam `restrict` (C99). **Não** o uses nos teus protótipos e **não** compiles com `-std=c99`.

## 3. Regras comuns (cap. II)
- Escrito em **C** e de acordo com a **Norma** (erro de norma = **0**).
- Sem crashes (segfault, bus error, double free…) exceto comportamento indefinido → senão **0**.
- Toda a memória alocada no heap tem de ser libertada → **sem leaks**.
- Makefile: flags `-Wall -Wextra -Werror`, compilador `cc`, **sem relink desnecessário**.
- Regras obrigatórias no Makefile: `$(NAME)`, `all`, `clean`, `fclean`, `re`.
- Testes próprios são encorajados, mas **não são entregues nem avaliados**.
- Só o que estiver no repositório Git é avaliado. Se a Deepthought avaliar, é **depois** das peer-evaluations; um erro em qualquer secção pára a avaliação.

## 4. Lembretes da Norma (confirma sempre na norma oficial/norminette)
- Máx. 25 linhas por função
- Máx. 5 funções por ficheiro
- Máx. 4 parâmetros por função
- Máx. 5 variáveis por função
- Declarações no início da função

> [!note] Dica de organização
> Um ficheiro por função (`ft_strlen.c`, …) facilita a regra das 5 funções por ficheiro. Helpers `static` ficam no mesmo ficheiro da função que os usa.

## 5. Notas importantes da Parte 1
- As funções devem ter **o mesmo protótipo e comportamento** do man page, só muda o prefixo `ft_`.
- **Não podem usar funções externas** (exceto `malloc` em `calloc`/`strdup`).
- Funções `is*`: devolver **1** se pertence à classe, **0** caso contrário (diferente da libc, que devolve "não-zero").
- `calloc`: se `nmemb` ou `size` for 0, devolve um **ponteiro único** que possa ser passado a `free()`.
- Em sistemas glibc, `strlcpy`, `strlcat` e `bzero` podem não vir por defeito → para testar contra a versão do sistema, incluir `<bsd/string.h>` e compilar com `-lbsd`.

## 6. Makefile — checklist
- [ ] `NAME = libft.a`
- [ ] `CC = cc` e `CFLAGS = -Wall -Wextra -Werror`
- [ ] Lista de fontes (`SRCS`) e objetos (`OBJS`)
- [ ] Regra `$(NAME)` cria a lib com `ar`
- [ ] `all` depende de `$(NAME)`
- [ ] `clean` remove os `.o`
- [ ] `fclean` remove os `.o` e `libft.a`
- [ ] `re` = `fclean` + `all`
- [ ] Não faz relink se nada mudou
- [ ] Dependência dos objetos no header (`libft.h`) — boa prática
- [ ] `.PHONY` para as regras que não são ficheiros

## 7. README.md — checklist (cap. V)
Ficheiro `README.md` **na raiz** do repositório. Deve incluir **pelo menos**:
- [ ] **Primeira linha em itálico:** *This project has been created as part of the 42 curriculum by `<login1>[, <login2>[, <login3>]]`.*
- [ ] Secção **Description** — objetivo e breve visão geral
- [ ] Secção **Instructions** — compilação, instalação e/ou execução
- [ ] Secção **Resources** — referências clássicas (docs, artigos, tutoriais) **+ descrição de como a IA foi usada** (em que tarefas e partes do projeto)
- [ ] **Descrição detalhada da biblioteca** criada
- [ ] Idioma: inglês recomendado (ou a língua principal do campus)

## 8. Regras de IA (cap. III) — resumo
> [!important]
> O objetivo é **aprender**, não obter respostas feitas.
- Raciocina primeiro, **antes** de recorrer à IA.
- **Não peças respostas diretas** à IA.
- Aprende com os colegas (peer-learning) — é mais valioso do que falar com um bot.
- Nos exames não há IA nem internet: se dependeres demasiado, vais notar.
- Na peer-evaluation tens de **saber explicar** tudo o que entregaste.

## 9. Entrega e peer-evaluation (cap. VI)
- Entrega no repositório Git; só o que lá estiver é avaliado.
- **Confirma os nomes dos ficheiros** e que estão **na raiz**.
- Durante a avaliação pode ser pedida uma **pequena modificação** (alterar um comportamento, escrever/reescrever poucas linhas, adicionar algo simples) → tens de perceber bem o teu código.
