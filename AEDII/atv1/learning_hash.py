import hash
import pandas as pd
import matplotlib.pyplot

# for i in range(0, 100):
#     x = hash.divisao(i, 12)
#     if x == 3:
#         print(i)

# for i in range(0, 100):
#     x = hash.divisao(i, 11)
#     if x == 3:
#         print(i)

# df = pd.DataFrame(columns=['Valor do Hash', 'Contagens'])
# for i in range(1, 10001):
#     df.loc[i] = (hash.divisao(i, 97), i)
# df_colisoes_divisao = df.groupby('Valor do Hash').agg({'Contagens':'count'})
# df_colisoes_divisao.to_csv('df_colisoes_divisao.csv')

# df = pd.DataFrame(columns=['Valor do Hash', 'Contagens'])
# for i in range(1, 500000):
#     df.loc[i] = (hash.multiplicacao(i, 200, 0.62), i)
# df_colisoes_mult_062 = df.groupby('Valor do Hash').agg({'Contagens':'count'})
# df_colisoes_mult_062.to_csv('df_colisoes_mult_062.csv')

df = pd.DataFrame(columns=['Valor do Hash', 'Contagens'])
for i in range(1, 500000):
    df.loc[i] = (hash.multiplicacao(i, 200, 0.61803398875), i)
df_colisoes_mult_061 = df.groupby('Valor do Hash').agg({'Contagens':'count'})
df_colisoes_mult_061.to_csv('df_colisoes_mult_061.csv')

import pdb; pdb.set_trace()

