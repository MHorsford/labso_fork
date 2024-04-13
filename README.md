# Programas em C utilizando fork() - Referente a Questão 1

Este repositório contém dois programas em C que demonstram o uso da função `fork()` para criar n processos. Um dos programas simplesmente imprime "Hello World!", enquanto o outro cria vários processos filhos que executam o programa "HelloWorld".

## hello_world.c

Este é um programa simples em C que imprime "Hello World!" na tela.

## fork.c

Este programa utiliza a função `fork()` para criar múltiplos processos filhos que executam o programa "HelloWorld". O número de processos filhos é determinado pelo argumento passado na linha de comando.

## Makefile

O makefile está configurado para compilar os programas "Fork" e "HelloWorld".

## Como compilar e executar

1 - Clone este repositório.
2 - Abra um terminal e navegue até o diretório do repositório.
3 - Execute o comando `make` ou `make -f Makefile.mk`, no caso do Minix 3, para compilar os programas.
4 - Depois de compilados, execute o programa "Fork" com o número desejado de processos filhos, por exemplo, `./Fork 20`.

Certifique-se do compilador CLANG estar instalado, no caso do Minix 3 execute `pkgin up` `pkgin_sets` e confirme para realizar a instalação.


