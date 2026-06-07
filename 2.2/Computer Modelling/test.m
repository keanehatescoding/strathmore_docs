x = linspace(-pi,pi,5000);
N = 10;
f_approx = zeros(size(x));

for k =1:2:N
	f_approx = f_approx + (4/pi) * (1/k)*sin(k*x);
end

plot(x, f_approx, 'r', 'LineWidth', 1.5);
hold on;
plot(x, square(x), 'b--');
legend('Fourier Approximation", 'Square Wave');
title('Approximation of Square Wave by Trigonometric Polynomials');
xlabel('x'), ylabel('f(x)');
