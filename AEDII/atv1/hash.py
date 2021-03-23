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
   try:
      if not(isinstance(key, int)) or not(isinstance(m, int)):
         return print("Os parametros precisam ser inteiros, tente novamente.")
      if m<=0:
         return print("O parametro 'm' precisa ser um inteiro positivo, tente novamente.")
      return key % m
   except:
      return print("Algo deu errado. Verifique seus parametros.")

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
   try:
      if not(isinstance(key, int)) or not(isinstance(m, int)):
         return print("Os parametros 'key' e 'm' precisam ser inteiros, tente novamente.")
      if not(0<A<1):
         return print("O parametro 'A' precisa ser um número flutuante entre 0 e 1.")
      if m<=0:
         return print("O parametro 'm' precisa ser um inteiro positivo, tente novamente.")
      return  (m * ((key*A) % 1))
   except:
      return print("Algo deu errado. Verifique seus parametros.")