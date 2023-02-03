algoritmo "TRIAGULOS"
var
 L1,L2,L3: Real
 EQ,ES,Tri : Logico
inicio
  Escreva("Digite o primeiro lado: ")
  Leia(L1)
  Escreva("Digite o segundo lado: ")
  Leia(L2)
  Escreva("Digite o ultimo lado: ")
  Leia(L3)
  Tri <- (L1 < L2 +L3) e (L2 < L1 + L3) e (L3 < L2+L1)
  EQ <- (L1=L2) e (L2=L3)
  ES <- (L1<>L2) e (L2<>L3) e (L1<>L3)
  Escreval("pode formar um triangulo? ",Tri)
  Escreval("O triangulo é EQUILATERO? ", EQ)
  Escreval("O triangulo é ESCALENO? ", ES)

fimalgoritmo