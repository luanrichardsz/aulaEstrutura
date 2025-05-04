# Basico
A linguagem C é uma linguagem compilada de propósito geral, estruturada, imperativa e procedural, padronizada pela ISO.

### Suas Funções
A linguagem C tem sua estrutura baseada em funções, que tem a seguinte estrutura:
````c
<tipo de retorno> nome_da_função([parametros]){
<instruções>;
return <valor a ser retornado>
}
````

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

### A Função fget
A função fgets() é usada para ler strings de forma segura em C, evitando problemas como buffer overflow. Diferente de gets(), que foi removida do padrão C11 por ser insegura, fgets() permite especificar um limite de leitura, tornando a entrada mais controlada.
