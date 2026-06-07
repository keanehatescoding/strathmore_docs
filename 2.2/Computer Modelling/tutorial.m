% To clear the window
clc
% To clear the workspace variables
clearvars
% Command to show detailed information about variables
whos
% '' is for chars while " " is for string
i.e 
a = 'test'; % this is a character
b = "test"; % this is a string
% To supress input add a ';'
c = 1;
% To create a vector
d = 1:15;
% This is the same as
e = linspace(1,15,1); % if the 3 argument isn't specified then it create 100 elements
% To transpose this vector
g = f';
% To create an array
h = [ 1, 2, 3, 4, 5];
i = [ 1 2 3 4  5]; % commas don't really matter
% To create a matrix
j = [ 1, 2; 3, 5; 5, 6];
k = [ 1  2; 3 5; 5 , 6];
% matrix properties apply i.e 
l = k + 2; % is the same as
m = [ 1  2; 3 5; 5 , 6] + [ 2  2; 2 2; 2 , 2];
% matrix multiplication
n = i * i; % will no work because y is not a square matrix
o = h * h'; % will work because you can multiple a matrix with it's transpose
% For element wise multiplication type
p = i ^ 2; % won't work because of incorrect dimensions when raising a matrix to a power
q = y.^2; % element wise operations require a dot
r = ones(3); % creates a 3x3 matrix of ones, zero(5) creates a 5x5 matrix of zeros
I = eye(4); % creates a 4x4 identity matrix
s = k(1,2); % indexing is done via () and uses 1 based indexing to get the last element use the end() function
% end - x can be also used to the a(-x) value
% : can be used to give us an entire column for a given row i.e a(2,:)
plot(x,y);
% max(y) will give us the max value in y conversely min(x) will give us the minimum value in x
[MaxVal, I] = min(y); % gives as the x value at the max of y
y = @(x) (-(x-3).^2) + 10; % returns a anonymous function that takes a value x and returns -(x-3)^2 + 10
y(20); 
% To plot multiple functions make sure you type hold on before plotting another function
plot(x,y1);
hold on
plot(x,y2);
% Labels, titles, legends
plot(x,y);
xlabel('x');
ylabel('y','*');
title(' y = -(x-3) ^2 + 10');
legend('Y1','Y2','Y3')
% Limits
xlim([0 5]), ylim([0 200]);
% to plot 2 graphs in one figure
subplot(1,2,3); % where 3 means we are plotting figure 3 and 1 is the number of rows and 2 is the number of columns
subplot(1,2,4); % where 3 means we are plotting figure 3 and 1 is the number of rows and 2 is the number of columns
%{ The labels,plot and legends for each figure should come immediately after each subplot statement %}
% Generate a random list of 20 numbers in the range 0 7
% and is &
A = randi(7,0,20);
% To define a new section type
%% Section 1
% To time a function use tic toc
tic 
function y = test(x)
	x = 1;
	y = x;
end
Time_taken = toc
% naming Conventions
% camelCase 
% snake_case

% while loops
while x< 21
	disp(sqrt(x))
	x = x-1;
end
% for functions defined in other files, the function name must be the same as the file name
