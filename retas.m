x = linspace(-10, 10, 100);
y1 = -x + 1;
y2 = (3 * x + 12)/2;

plot(x, y1, 'r', x, y2, 'b');
hold on; % Permite adicionar mais elementos ao gráfico existente
plot(-2, 3, 'go', 'MarkerSize', 10); % Plota o ponto (x, y) com um marcador verde ('go')

legend('Equação 1: x + y = 1', 'Equação 2: 3x - 2y = -12');
xlabel('Eixo x');
ylabel('Eixo y');
grid on;
