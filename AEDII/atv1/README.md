# Atividade I - Funções de espalhamento

## O que é?
Este é um repositório com atividade acerca de Funções de espalhamento da disciplina de Algoritimo e Estrutura II da UFABC realizada no QS-2021.1.

Funções de espalhamento (hashing) sâo funções que transformam cada chave em um índice da tabela de hash. Uma tabela de dispersão ou tabela de hash (hash table) é um vetor cada uma de cujas posições armazena zero, uma, ou mais chaves.[[1]](https://www.ime.usp.br/~pf/estruturas-de-dados/aulas/st-hash.html)

### Função de espalhamento pelo método da divisão
Método onde a chave k é dividida pela dimensão da tabela m.
<br>
<img src="https://render.githubusercontent.com/render/math?math=h(k)=k mod m">


### Função de espalhamento pelo método da multiplicação
Método onde se utiliza uma constante A (0<A<1), sendo h(k) calculado como:
<br>
<img src="https://render.githubusercontent.com/render/math?math=h(k)=[m(kA mod 1)]">





## Instruções de uso
### hash.py
O arquivo hash.py corresponde a biblioteca, ou seja, conjunto de módulos, onde estâo implementadas as funções de espalhamento. Para importar a biblioteca criada para se trabalhar em seu código basta seguir o código abaixo:

```
import hash
```

Para chamar a funcao pelo metodo da divisão basta executar:
```
hash.divisao(key, m)
```

Para chamar a funcao pelo metodo da multiplicacão basta executar:
```
hash.multiplicacao(key, m, A)
```

### learning_hash.py
O arquivo learning_hash.py corresponde ao código criado para responder as perguntas feitas pelo professor, usando a biblioteca hash também desenvolvida por mim, e cujo os resultados posteriormente foram incluidas em um relatório que pode ser acessado [AQUI](https://docs.google.com/document/d/100QqMHkSji9Jkb8Nku1qLeqLMLWXNBz7aJyOSlYrQVk/edit?usp=sharing).