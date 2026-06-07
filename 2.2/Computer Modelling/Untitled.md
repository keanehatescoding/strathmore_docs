```matlab
clearvars, clc, close all;

function sin_val = taylor_sin(x)
	if any(x < -pi | x > pi)
		error("Function expects radians within the interval [-π, π]")
	end
    sin_val = 0;
    for n = 0:4
        sin_val = sin_val + (((-1)^n) * (x ^ (2 * n + 1))) / factorial(2 * n + 1);
    end
end

function val = taylor_cos(x)
	if any(x < -pi | x > pi)
		error("Function expects radians within the interval [-π, π]")
	end
	val = 0;
	for n = 0:3
		val = val + ((-1)^n * x^(2*n)) / factorial(2*n);
	end
end

function val = taylor_ln(x)
	val = 0;
	for n = 1:5
		val = val + ((-1)^(n+1))*((x -1)^n) / n;
	end
end

% ---- display some values ----
fprintf("Taylor estimation of cos(0.5) is: %.10f\n", taylor_cos(0.5));
fprintf("Taylor estimation of ln(1.1) is: %.10f\n", taylor_ln(1.1));

% ---- x ranges ----
x_trig = linspace(-pi, pi, 100);       % for sin and cos (functions expect [-pi,pi])
x_ln  = linspace(0.1, 2, 100);         % ln series around 1 converges for 0<x<=2

y_sin_approx = arrayfun(@taylor_sin, x_trig);
y_cos_approx = arrayfun(@taylor_cos, x_trig);
y_ln_approx  = arrayfun(@taylor_ln, x_ln);

% ---- evaluate actual functions ----
y_sin_true = sin(x_trig);
y_cos_true = cos(x_trig);
y_ln_true  = log(x_ln);

% ---- Plot sin ----
figure('Name','sin(x) approximation vs actual','NumberTitle','off');
plot(x_trig, y_sin_true, 'b-', 'LineWidth', 1.5); hold on;
plot(x_trig, y_sin_approx, 'r--', 'LineWidth', 1.5);
grid on;
legend('sin(x) (actual)', 'taylor\_sin(x) (approx)', 'Location','Best');
title('sin(x): actual vs Taylor approximation (order 9)');
xlabel('x (radians)');
ylabel('y');

% ---- Plot cos ----
figure('Name','cos(x) approximation vs actual','NumberTitle','off');
plot(x_trig, y_cos_true, 'b-', 'LineWidth', 1.5); hold on;
plot(x_trig, y_cos_approx, 'r--', 'LineWidth', 1.5);
grid on;
legend('cos(x) (actual)', 'taylor\_cos(x) (approx)', 'Location','Best');
title('cos(x): actual vs Taylor approximation (order 6)');
xlabel('x (radians)');
ylabel('y');

% ---- Plot ln ----
figure('Name','ln(x) approximation vs actual','NumberTitle','off');
plot(x_ln, y_ln_true, 'b-', 'LineWidth', 1.5); hold on;
plot(x_ln, y_ln_approx, 'r--', 'LineWidth', 1.5);
grid on;
legend('ln(x) (actual)', 'taylor\_ln(x) (approx)', 'Location','Best');
title('ln(x): actual vs Taylor (series around 1, 5 terms)');
xlabel('x');
ylabel('y');

% ---- display max absolute error for each ----
max_err_sin = max(abs(y_sin_true - y_sin_approx));
max_err_cos = max(abs(y_cos_true - y_cos_approx));
max_err_ln  = max(abs(y_ln_true  - y_ln_approx));
fprintf('Max abs error: sin: %.3e, cos: %.3e, ln: %.3e\n', max_err_sin, max_err_cos, max_err_ln);
```

1. A Taylor series is an infinite sum of terms that represents a function based on its derivatives at a single point and it is used to approximate functions e.g. e^x or sin(x).
2. The difference between the Taylor series calculated value and the exact value (if known) is referred to as truncation error and it is estimated calculating the leading order term that was dropped.
3. It is valid for [-1, 1] because after when x = 1 it becomes an alternating harmonic series while when x = -1 then it becomes divergent.