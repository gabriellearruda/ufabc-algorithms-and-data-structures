import hash
import pandas as pd
import matplotlib.pyplot


# Função de espalhamento pelo método da divisão
# Usando m = 12, teste a função de divisão com valores de chave variando de 0 até 100. 
# Quando o resultado h(x) é igual a 3, imprime o valor de chave correspondente.
for i in range(0, 101):
    if hash.divisao(i, 12) == 3:
        print(i)

# Usando m = 11, teste a função de divisão com valores de chave variando de 0 até 100. 
# Quando o resultado h(x) é igual a 3, imprime o valor de chave correspondente.
for i in range(0, 101):
    if hash.divisao(i, 11) == 3:
        print(i)


# Usando m = 97, testa a função da divisão com chaves variando de 1 até 10 mil.
# Conta o número de colisões para cada valor diferente de h(k), exporta os dados como csv.
# df = pd.DataFrame(columns=['Valor do Hash', 'Contagens'])
# for i in range(1, 10001):
#     df.loc[i] = (hash.divisao(i, 97), i)
# df_colisoes_divisao = df.groupby('Valor do Hash').agg({'Contagens':'count'})
# df_colisoes_divisao.to_csv('df_colisoes_divisao.csv')



# Função de espalhamento pelo método da multiplicação

# Usando m = 200 e A = 0.62, testa a função da multiplicacao com chaves variando de 1 até 500 mil.
# Conta o número de colisões para cada valor diferente de h(k), exporta os dados como csv.
# df = pd.DataFrame(columns=['Valor do Hash', 'Contagens'])
# for i in range(1, 500001):
#     df.loc[i] = (hash.multiplicacao(i, 200, 0.62), i)
# df_colisoes_mult_062 = df.groupby('Valor do Hash').agg({'Contagens':'count'})
# df_colisoes_mult_062.to_csv('df_colisoes_mult_062.csv')



# Usando m = 200 e A = 0.61803398875, testa a função da multiplicacao com chaves variando de 1 até 500 mil.
# Conta o número de colisões para cada valor diferente de h(k), exporta os dados como csv.
# df = pd.DataFrame(columns=['Valor do Hash', 'Contagens'])
# for i in range(1, 500001):
#     df.loc[i] = (hash.multiplicacao(i, 200, 0.61803398875), i)
# df_colisoes_mult_061 = df.groupby('Valor do Hash').agg({'Contagens':'count'})
# df_colisoes_mult_061.to_csv('df_colisoes_mult_061.csv')
# 198.87500000186265

import pdb; pdb.set_trace()

