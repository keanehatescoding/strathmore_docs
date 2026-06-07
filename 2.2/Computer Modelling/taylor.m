% clear the command window and clear workspace variables and close all plots
clc, clearvars, close all
function y = taylor_sin(x,terms)
	if any(x < -pi | x > pi )
		error("Expected radians");
	end

	y = 0;

	% use 5 terms by default if they don't provide the number of terms
	if nargin ~= 2
		terms = 5;
	end
	for n = 0:terms-1
		y = y + ((-1) ^ n) * (x^(2 * n + 1)) / factorial(2 * n + 1);
	end
end

function y = taylor_cos(x , terms)
	if any(x < -pi | x > pi )
		error("Expected radians");
	end
	y = 0;
	% use 5 terms by default if they don't provide the number of terms
	if nargin ~= 2
		terms = 5;
	end
	for n = 0:terms-1
		y = y + (((-1) ^ n ) * ( x ^ ( 2 * n))) / factorial( 2 * n);
	end
end

function y = taylor_e(x, terms)
	if nargin ~= 2
		terms = 5;
	end
	for n=0:terms
		y = y + (x ^ n) / factorial(n);
	end
end
x_sin = -pi:pi;
plot(taylor_sin, x_sin);

x_cos = -pi:pi;
plot(taylor_cos, x_cos);

x_e = -pi:pi;
plot(taylor_e,x_e);;
