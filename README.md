### Calculadora em C com Árvore de Decisão

Este projeto implementa uma calculadora simples em linguagem C que utiliza um algoritmo de árvore de decisão para escolher entre quatro operações matemáticas: adição, subtração, multiplicação e divisão.

### Funcionalidades

- **Operações suportadas:**
  - Adição
  - Subtração
  - Multiplicação
  - Divisão (com verificação de divisão por zero)
  
- **Interação com o usuário:**
  - O programa solicita ao usuário que insira dois números e escolha a operação desejada.
  - Exibe o resultado da operação selecionada.

### Requisitos

- Compilador C (por exemplo, GCC).
- Sistema operacional compatível com C (Linux, macOS, Windows, etc.).

### Como executar

1. Clone o repositório ou baixe o código-fonte.
2. Compile o código com o seguinte comando (usando GCC como exemplo):

   ```bash
   gcc -o calculadora calculadora.c
   ```

3. Execute o programa compilado:

   ```bash
   ./calculadora
   ```

4. Siga as instruções na tela para inserir dois números e selecionar a operação matemática desejada.

### Estrutura do Projeto

- `calculadora.c`: Código-fonte principal que contém a implementação da calculadora.

### Exemplo de Uso

Ao executar o programa, você verá algo assim:

```
Escolha a operação desejada:
1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
Digite o número da operação: 1
Digite o primeiro número: 10
Digite o segundo número: 5
Resultado: 15.00
```

### Personalização

Este projeto pode ser expandido para incluir mais funcionalidades, como:

- Suporte para operações mais avançadas (potenciação, radiciação, etc.).
- Validação de entrada aprimorada.
- Interface gráfica (com bibliotecas como GTK ou ncurses).
  
### Contribuições

Sinta-se à vontade para fazer um fork deste projeto, criar issues ou abrir pull requests para melhorias.