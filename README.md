# Batalha de Cartas - Super Trunfo em C

Este projeto é uma simulação de batalha de cartas no estilo **Super Trunfo**, desenvolvido na linguagem **C**. O programa permite comparar duas cartas com base em atributos como população, área, PIB, pontos turísticos, densidade populacional, PIB per capita e um cálculo especial chamado **Super Poder**.

## 💡 Objetivo

Praticar conceitos da linguagem C como:
- Uso de structs
- Manipulação de strings
- Entrada e saída de dados
- Conversão de tipos
- Operadores relacionais
- Lógica de comparação

### Cálculos

- **Densidade Populacional** = população / área  
- **PIB per Capita** = PIB / população  
- **Super Poder** = soma dos atributos numéricos + (inverso da densidade populacional)  
  > Quanto menor a densidade, maior o poder

## ⚔️ Comparação

A comparação entre as cartas é feita com base nas seguintes regras:

- Atributos numéricos: vence quem tiver o maior valor
- Densidade populacional: vence quem tiver o menor valor
- Super Poder: vence quem tiver o maior valor

O programa exibe qual carta venceu em cada atributo, utilizando o nome da carta.

## ▶️ Como Executar

1. Compile o código com um compilador C (ex: `gcc`):
2. Execute o programa
3. Insira os dados das duas cartas conforme solicitado.

## 📄 Exemplo de Saída
Comparacao de Cartas:

Populacao: NomeDaCarta1 venceu (1)
Area: NomeDaCarta2 venceu (0)
PIB: NomeDaCarta1 venceu (1)
Pontos Turisticos: NomeDaCarta1 venceu (1)
Densidade Populacional: NomeDaCarta2 venceu (0)
PIB per Capita: NomeDaCarta1 venceu (1)
Super Poder: NomeDaCarta1 venceu (1)


## 🛠️ Tecnologias
Linguagem C
Compilador GCC (ou qualquer outro compatível)

## 📚 Aprendizado
Este projeto foi proposto como um desafio de programação para aprofundar o conhecimento em C, estruturando dados e utilizando lógica matemática e comparativa entre structs.

## ✍️ Autor
Desenvolvido por [Seu Nome Aqui]
Curso: [Seu Curso/Fundação/Faculdade]
GitHub: https://github.com/seuusuario
