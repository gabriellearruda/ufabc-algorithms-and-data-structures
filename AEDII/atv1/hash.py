def divisao(key, m):
   """
   Função de espalhamento (hashing) pelo método da divisão.

   Parameters
   ----------
   key: int
      Chave.
   m: int
      Parâmetro a ser usado para calculo da hash.

   Returns
   -------
   hashvalue: int
      Resultado de h(k) pelo método da divisão dado os parametros inseridos.
   """
   return  key % m

def multiplicacao(key, m, A):
   """
   Função de espalhamento (hashing) pelo método da multiplicacão.

   Parameters
   ----------
   key: int
      Chave.
   m: int
      Parâmetro a ser usado para calculo da hash.
   A: float
      Parâmetro a ser usado para calculo da hash.

   Returns
   -------
   hashvalue: int
      Resultado de h(k) pelo método da multiplicacão dado os parametros inseridos.
   """
   return  (m * ((key*A) % 1))