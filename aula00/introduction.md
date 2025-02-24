# Estrutura de Dados em C

## Linguagem C
A linguagem C é uma linguagem compilada de propósito geral, estruturada, imperativa e procedural, padronizada pela ISO. Criada em 1972 por Dennis Ritchie, no AT&T Bell Labs, tinha o propósito de ser utilizada no sistema operacional Unix, que foi originalmente escrito em Assembly.

O nome "C" foi escolhido porque suas características foram obtidas a partir de uma linguagem chamada "B", que, por sua vez, era uma versão reduzida de "BCPL".

### Principais Características

- Um programa escrito em C não pode ser executado diretamente, pois os computadores só executam programas em sua linguagem de máquina.
- C é uma linguagem compilada.
- Um compilador lê o programa escrito em C e traduz cada uma de suas instruções para linguagem de máquina.
- Todas as palavras-chave da linguagem são escritas em letras minúsculas.

### Editor de Código

Para a criação e edição de código em C, podemos utilizar qualquer editor de texto simples.

### Suas Funções
A linguagem C tem sua estrutura baseada em funções, que tem a seguinte estrutura:
<tipo de retorno> nome_da_função([parametros]){
    <instruções>;
    return <valor a ser retornado>
}

### A Função main()
A unica função obrigatoria no C é a main().

### A Função fget
A função fgets() é usada para ler strings de forma segura em C, evitando problemas como buffer overflow. Diferente de gets(), que foi removida do padrão C11 por ser insegura, fgets() permite especificar um limite de leitura, tornando a entrada mais controlada.

### Teclas de Escape
| Sequência | Descrição |
|-----------|-----------|
| `\n`  | Nova linha (line feed) |
| `\t`  | Tabulação horizontal |
| `\v`  | Tabulação vertical |
| `\b`  | Backspace (apaga o caractere anterior) |
| `\r`  | Retorno de carro (move o cursor para o início da linha) |
| `\f`  | Alimentação de formulário (page break) |
| `\a`  | Alerta (beep sonoro, se suportado) |
| `\\`  | Barra invertida literal (`\`) |
| `\'`  | Aspas simples (`'`) |
| `\"`  | Aspas duplas (`"`) |
| `\?`  | Interrogação literal (`?`, evita ambiguidade com trigraphs) |
| `\0`  | Nulo (`NULL`, caractere terminador de strings) |
| `\xhh` | Caractere ASCII representado por um valor hexadecimal (`\x41` → `'A'`) |
| `\ooo` | Caractere ASCII representado por um valor octal (`\101` → `'A'`) |

## Linguagem C++
A linguagem C++ foi desenvolvida cerca de oito anos depois de C e introduziu conceitos de programação orientada a objetos, mantendo compatibilidade com a linguagem C.