```matlab
clearvars,clc,close all;
function sin_val = taylor_sin(x,terms)
	if any(x < -pi | x > pi)
		error("Function expects radians within the interval [-π, π]")
	end
	if nargin < 2
		terms = 5;
	end
    sin_val = 0;
    for n = 0:terms-1
        sin_val = sin_val + (((-1)^n) * (x ^ (2 * n + 1))) / factorial(2 * n + 1);
    end
end

function val = taylor_cos(x,terms)
	if any(x < -pi | x > pi)
		error("Function expects radians within the interval [-π, π]")
	end
	if nargin < 2
		terms = 5;
	end
	val = 0;
	for n = 0:terms-1
		val = val + ((-1)^n * x^(2*n)) / factorial(2*n);
	end
end

function val = taylor_ln(x,terms)
	if nargin < 2
		terms = 5;
	end
	val = 0;
	for n = 1:terms-1
		val = val + ((-1)^n)\*((x -1)^n) / n
	end
end
taylor_cos(0.5)
taylor_ln(1.1)
x = 0:0.1:2;
n_terms = 5;
est = zeros(size(x));

for i=1:length(x)
	sum = 0;
	for n = 0: n_terms
		sum = sum + (x(i)^n)/factorial(n);
	end
	est(i) = sum;
end
plot(x, exp(x), 'b-', x, est, 'r--');
legend('True e^x', 'Taylor Approximation');
title("Comparison of True e^x and Taylor Series");
xlabel('x');
ylabel('Function Value');
```

A Taylor series is an infinite sum of terms that represents a function based on its derivatives at a single point and it is used to approximate functions e.g. e^x or sin(x).
The difference between the Taylor series calculated value and the exact value (if known) is referred to as truncation error and it is estimated calculating the leading order term that was dropped.
It is valid for [-1, 1] because after when x = 1 it becomes an alternating harmionic series while when x = -1 then it becomes divergent.