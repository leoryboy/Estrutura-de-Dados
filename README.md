# Estrutura-de-Dados

Este repositório contém códigos e exemplos desenvolvidos durante os estudos de **Estrutura de Dados** em linguagem C.  
Os arquivos estão organizados em diretórios temáticos:

- **array/** → Exemplos e exercícios relacionados a vetores (arrays).
- **exemplos/** → Programas simples em C para prática de conceitos básicos.
- **exercicios/** → Lista de exercícios resolvidos em C.
- **loops/** → Exemplos de estruturas de repetição (`for`, `while`, `do while`).

---

## ⚙️ Como compilar os códigos em C no VS Code

Para compilar os programas, é necessário instalar o **MinGW** (compilador GCC para Windows).  

### 1. Instalar o MinGW
Baixe e instale o MinGW a partir do link:  
👉 [Download MinGW](https://drive.google.com/file/d/1mNb7XmhPfxX0LtQ9wMmD7VVPC50kF0AW/view?usp=classroom_web&authuser=0)

### 2. Configurar o ambiente
Siga o passo a passo descrito neste tutorial da Alura:  
👉 [Como configurar o compilador no Prompt](https://cursos.alura.com.br/forum/topico-eu-nao-estou-conseguindo-compilar-o-programa-no-prompt-175116)

Resumindo:
- Adicione o caminho da pasta `bin` do MinGW nas variáveis de ambiente do Windows.  
  Exemplo: `C:\MinGW\bin`
- Verifique se está funcionando com:
  ```bash
  gcc --version
