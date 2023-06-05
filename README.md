# GS-EdgeComputing

Relatório do Projeto: Sensor de Temperatura e Simulação de Sensor de Umidade para Agricultura

Introdução
O objetivo deste projeto é desenvolver um sistema de monitoramento de temperatura e simulação de umidade para auxiliar fazendeiros na determinação das condições ideais para o cultivo. Utilizando o sensor de temperatura TMP36 e um potenciômetro para simular a umidade, o projeto visa fornecer informações relevantes para o cultivo de plantas, permitindo a tomada de decisões informadas.

Descrição do Projeto
Os materiais utilizados neste projeto são:

Arduino Uno
Sensor de temperatura TMP36;
Potenciômetro (para simulação de umidade);
Placa de ensaio (base para os componentes);
Jumpers para conexões;

Montagem do Circuito
Para montar o circuito, siga as seguintes etapas:

Posicione a placa de ensaio e fixe o Arduino Uno nela.
Conecte o sensor de temperatura TMP36 na placa de ensaio, utilizando jumpers para ligar o pino Vcc do sensor ao pino 5V do Arduino, o pino GND do sensor ao pino GND do Arduino e o pino Vout do sensor ao pino analógico A0 do Arduino.
Conecte o potenciômetro na placa de ensaio, utilizando jumpers para ligar o terminal 1 do potenciômetro ao pino GND do Arduino, o terminal 2 do potenciômetro ao pino 5V do Arduino e o pino limpador do potenciômetro ao pino analógico A1 do Arduino.

Funcionamento do Sistema
O sistema consiste em realizar a leitura da temperatura ambiente utilizando o sensor TMP36 e simular a leitura de umidade por meio do potenciômetro. O sensor de temperatura fornece leituras precisas da temperatura, enquanto o potenciômetro permite ao fazendeiro escolher entre medir a umidade do ar ou do solo, simulando os diferentes ambientes de cultivo.

Resultados e Utilização
Ao executar o sistema, é possível obter leituras da temperatura ambiente em graus Celsius utilizando o sensor TMP36. Além disso, o fazendeiro pode ajustar o potenciômetro para selecionar a medição de umidade do ar ou do solo. Os resultados fornecem informações úteis para tomar decisões relacionadas ao cultivo e ajudam a garantir condições ideais para o crescimento das plantas.

Discussão
O projeto do sensor de temperatura e simulação de umidade demonstra a capacidade do Arduino em fornecer informações valiosas para a agricultura. Ao monitorar a temperatura e simular a umidade, os fazendeiros podem ajustar as condições de cultivo de acordo com as necessidades específicas das plantas, melhorando a eficiência e a produtividade do cultivo.

Conclusão
O sistema de monitoramento de temperatura e simulação de umidade desenvolvido neste projeto é uma ferramenta útil para os fazendeiros na determinação das condições ideais para o cultivo. Com a utilização do sensor de temperatura TMP36 e o potenciômetro para simulação de umidade, é possível obter informações cruciais para a tomada de decisões informadas no cultivo agrícola.