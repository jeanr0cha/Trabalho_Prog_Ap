# Trabalho_Prog_Ap
INTEGRANTES DO GRUPO: Jean da Rocha, Raquel, Sarah e Saulo
Trabalho proposto pelo professor para fazer a comunicação entre um executavel e arduino.


###INSTRUÇÕES PARA O TRABALHO ABAIXO

Trabalho da disciplina de Programação Aplicada 2023/1
Professor: Anderson Sachetto Rosa
Comunicação Arduino Computador com Controle de I/Os
Neste projeto, vocês irão utilizar um Arduino (ou outra plataforma similar) para se comunicar
com um computador via comunicação serial. O objetivo deste projeto é a troca de informações
entre o Arduino e o computador e utilizar esta comunicação para controle de várias entradas e
saídas (inputs e outputs – I/O).

Este projeto pode ser dividido em duas partes principais:
1) Comunicação Arduino-Computador: Vocês precisarão escrever dois códigos (um para
o Arduino e outro para o Computador) que estabeleça uma comunicação serial entre o
Arduino e o computador. O código deverá ser capaz de enviar e receber informações
entre os dois dispositivos.

2) Controle de I/Os: Os códigos de vocês deverá ser capaz de controlar várias entradas e
saídas do Arduino (mais informações abaixo).
DEFINIÇÕES
Equipamento (server): Dispositivo de eletrônica embarcada dotado de um microcontrolador
programável (em linguagem C), algum dispositivo de comunicação serial e interfaces de
entrada e saída (Ex. Arduino Uno).
Interface (cliente ou estação): Software desenvolvido em linguagem C que “rodará” em um
PC (Computador Pessoal), servirá para enviar e receber as informações dos equipamentos.
Periféricos: Dispositivos eletroeletrônicos que possam ser conectados às entradas digitais ou
analógicas do Equipamento. Serão considerados periféricos, por exemplo, botões, LEDs,
motores de passo, sensores de umidade, sensores de temperatura, potenciômetros, motores DC,
etc.

##INTRODUÇÃO
Este documento traz as especificações referentes ao trabalho da disciplina de Programação
Aplicada do semestre de 2023/1. As informações aqui contidas servirão como base para o
desenvolvimento do trabalho pelos alunos. Além de seguirem os critérios aqui descritos, os
grupos deverão abordar o maior número de conceitos vistos em sala de aula possíveis,
sendo esses conceitos levados em consideração durante a avaliação do projeto.
O EQUIPAMENTO
O equipamento desenvolvido pelo grupo deverá contemplar no mínimo os seguintes
periféricos.
• 02 (duas) entradas digitais.
• 01 (uma) entrada analógica.
• 02 (duas) saídas analógicas.
• 02 (duas) saídas digitais.
A interface deverá ser capaz de ler o estado (valores) de todos os periféricos e acionar todos
aqueles que estiverem conectados às saídas (tanto analógicas quanto digitais) do equipamento.
A INTERFACE
A interface deverá ser desenvolvida em linguagem C e capaz de “interagir” com o usuário
através do console. Ela deverá ser dotada de “Menus” de navegação, de modo que o usuário
possa escolher o que deseja fazer como, por exemplo, acionar um LED conectado à uma porta
específica, ou ainda, fazer 10 leituras do sensor de temperatura conectado à entrada analógica
a intervalos de 2 segundos entre uma e outra.
Requisitos mínimos para a interface:
• Ligar/Desligar as saídas digitais.
• Ler o estado das saídas e entradas digitais (dizer se elas estão acionadas ou não).
• Ler o valor das saídas e entradas analógicas e exibi-los em volts. O usuário deverá ser
capaz de fazer uma única leitura, ou um número X de leituras a um intervalo constante
de T segundos entre leituras.
• Escrever valores, em volts, nas saídas analógicas.

##ENTREGAS DO PROJETO
• Vocês deverão entregar um relatório do projeto, incluindo a descrição do processo de
comunicação utilizado, dos periféricos conectados ao Arduino e as funcionalidades do
seu código (não é preciso explicar o código linha a linha, escreva sobre as funções que
foram criadas, bibliotecas utilizadas e os conceitos da disciplinas que foram utilizados
e onde foram utilizados). É interessante ter um esquemático das ligações elétricas feitas
(pode ser utilizado o Tinkercad, veja o exemplo da Figura 1).
Figura 1 - Exemplo de esquemático elétrico feito com o Tinkercad.
• Junto com o relatório deverá ser entregue os códigos desenvolvidos pelo grupo, de
preferência utilizando um sistema de repositório de código como, por exemplo, o Github
(github.com).
• O funcionamento do trabalho deverá ser apresentado presencialmente na Faculdade
UCL, vejas datas de entrega abaixo.
OBSERVAÇÃO IMPORTANTE:
• Os grupos deverão ser formados por no máximo 04 (quatro) alunos.
• A avaliação do trabalho será baseada no relatório entregue, aspectos construtivos do
equipamento, usabilidade da interface e uso dos conceitos abordados durante a
disciplina de Programação Aplicada.
• Atrasos serão penalizados com a perda de dois pontos para cada fração de dia de atraso.
• Todos os grupos deverão enviar os códigos e o relatório através do formulário
(https://forms.gle/TuABo1mJa9dQxnM56) até o dia 29/06/2023.
• As apresentações acontecerão no dia 27/06/2023 (isso mesmo, dois dias antes da data
limite para o relatório).
Um ótimo trabalho a todos!
