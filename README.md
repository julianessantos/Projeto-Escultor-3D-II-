# Projeto Escultor 3D (II)
### Alunos envolvidos:
ANDRÉ ARAÚJO DE SOUZA SILVA (Matrícula 20190134520)
JULIANE DA SILVA SANTOS (Matrícula 20200075288)

## Apresentação 

O objetivo desse projeto é construir uma ferramenta em C++ para realizar esculturas em blocos representados por matrizes digitais, algo como a ideia usada pelo jogo minecraft.

A ideia é permitir que o utilizador da ferramenta seja capaz de criar um arquivo em texto simples que contém uma sequência de passos a serem seguidos para definir propriedades de uma matriz tridimensional. As propriedades contêm especificações de cor para os elementos, de sorte que com o auxílio de softwares de visualização o usuário possa apreciar a escultura criada.

O projeto pode ser visualizado utilizando a plataforma replit, para execução do código e download do arquivo .off, e o site 3D Viewer.

## A classe Escultor - Parte 2 - Estruturas avançadas

O projeto deverá ser capaz de tratar classes abstratas para manipulação de figuras geométricas simples, realizando operações de desenho em uma matriz de pontos.

Para isso, a estrutura criada para a classe Sculptor deverá ser repensada e uma nova classe chamada FiguraGeometrica entrará como participante do processo de desenho.

Não serão criados objetos dessa nova classe, mas ela agora será a base para várias outras classes concretas, que proverão funcionalidades semelhantes àquelas providas pela classe Sculptor do projeto anterior.
