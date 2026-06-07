They are 3 main
1. Mean
2. Median
3. Mode
# Mean
There are 5 types of mean, namely:
1. Arithmetic mean
2. Geometric mean
3. Harmonic mean
4. Weighted mean
5. Trimmed mean

## Arithmetic mean
Say we have a set of n numbers. If we __add__ all the values we get $\sum\limits x$ . If we divide this by sum by number of elements then we get the __arithmetic mean__.
The arithmetic mean therefore implies a number such that if we were to replace all the numbers in the set with it and sum the set and then divide by the number of items in the set we would still get the same result as if we used the original numbers in the set.
The key term is we are summing all the elements in the set not multiplying or raising them to a power.
$$AM = \frac{x_{1}+ ...+x_n}{n}$$
The arithmetic mean for population and sample respectively are:
$$\micro = \frac{\sum\limits_{i=1}^N (x_i)}{N}$$
$$\bar x = \frac{\sum\limits_{i=1}^{n}{(x_i)}}{n}$$
The mean of a sample of data organized in a frequency distribution is computed by the following formula:
$$\bar x = \frac{f_{1}x_{1}+...+f_{n}x_{n}}{f_{1}+..+f_n}=\sum\limits_{i=1}^n\frac{f_ix_i}{f_i}$$
where $f_i$ is the frequency of Class $i$ and $x_i$ is the class midpoint of Class $i$
### Properties of Arithmetic mean
1. Easy to compute
2. It requires at least the interval scale
3. All values are used
4. It is unique meaning the mean can be at most one number.
5. The sum of deviations from the mean is 0
6. It is easily affected by extremes hence lacks robustness.
## Geometric Mean
$$GM=\sqrt {a_{1}\cdot a_{2}\cdot...\cdot a_n}$$

## Harmonic Mean
For an individual series it is given by
$$HM= \frac{n}{\sum\limits \frac{1}{n}}$$
For a discrete series or continuous it is given by $$HM=\frac{N}{\sum\limits(\frac{f}{x})}$$ Weighted harmonic mean 
$$HM_{W}=\frac{\sum\limits W}{\sum\limits \frac{W}{x}}$$
## Weighted Mean
The Weighted Mean (WM) of a set of n numbers
$$WM = \frac{w_{1}x_{1}+...+w_{n}x_{n}}{w_{1}+...+w_n}$$
# Median
## Median of UnGrouped Data
1. Sort the data in ascending order
2. If the total number of items $n$, is odd, then the number of the $(\frac{n+1}{2})^{\text{th}}$ position is the median. If $n$ is even then the average of the two numbers $(\frac{n}{2})^{\text{th}}$  and $(\frac{n+1}{2})^{\text{th}}$ positions is the median. (For ordinal level of data, choose any one on the two middle positions)
Is the midpoint of the value after they have been ordered from the smallest to the largest.
Equivalently, the Median is a number which divides the data set into two equal parts, each item in one part is no more than this number, and each item in another part is no less than this number.
## Median of Grouped Data
### Steps
1. Identify the median class, which is the class that contains $(\frac{n}{2})^{\text{th}}$ position.
2. Estimate the median value within the median class using the following formula
$$M = L\frac{M-C.F}{f}i$$
where 
$M = \frac{n+1}{2}$ and $n$ = number of elements
$L$ is the __lower class boundary__ of the __median class__
$C.F$ is the __cumulative frequency up to the class prior to the median class__
$f$ is the __frequency__ of the __median class__.
$i$ is the __class interval or size__.

## Properties of Median
1. It requires at least the ordinal scale
2. All values are used
3. It is unique
4. It is easy to calculate but does not allow mathematical treatment.
5. It is not easily affected by extreme values hence it is robust.
### Decile
The data $n$ is divided into equal parts.
For __ungrouped data:__
$$k = \set{1, 2, 3, ...9}$$
$$D_{k} = \frac{k}{10}(n+1)^{\text {th}}\space\text{value}$$
For __grouped data:__
$$D_{k}= \frac{k}{10}(n)^{\text {th}}$$
### Percentile
For __ungrouped data:__
$$P_{k}= \frac{k}{100}(n+1)^{\text th}\space{\text{value}}$$
For __grouped data:__
$$P_{k}= \frac{k}{100}(n)^{\text{value}}$$

Given 2 datasets are follows
(1) 15, 28, 45, 33, 18, 24, 27, 
(2) 18, 37, 63, 70, 53, 46, 31
Find $Q_1$, $Q_2$ $Q_D$ and C.Q.D of each set and comment on the variation of datasets.
Arranged set 1
15, 18, 24, 27, 28, 33, 45
$Q_{1}= \frac{1}{4}(7+1)=2^{\text {value}}=33$
$Q_{3}= \frac{3}{4}(7+1)=6^{\text {value}}=18$
$IQR$ = $Q_3-Q_1$ = 38 - 18 = 20
$Q_D$ = $\frac{IQR}{2}$  
$C.Q.D$ = $\frac{Q_{3}-Q_{1}}{Q_{3}+Q_{1}}=\frac{15}{31}=0.29$
Arranged set 2 
18, 31, 37, 46, 53, 63, 70
$Q_{1}=\frac{1}{4}(7+1)=2^{\text{value}}=31$
$Q_{3}=\frac{3}{4}(7+1)=6^{\text{value}}=63$
$IQR$ = $Q_3-Q_1$ = 63-31 = 32
$Q_D$ = $\frac{IQR}{2}$ = 32 /2 = 16
$C.Q.D$ = $\frac{Q_{1}-Q_{2}}{Q_{1}+Q_{2}}$ = $\frac{32}{94}$ = 0.34 -> 34%

# Mode
The number that has the highest frequency.
## Mode of Grouped Data
1. Identify the modal class, which is the class with the highest frequency
2. Estimate the mode(s) within the modal class(es) using the following formula:
$$\text{mode} = L + \frac{f_{1}− f_{0}}{2 × f_1 − f_0 − f_2}× i
$$
where
⋄ $L$ is the lower class boundary of the modal class
⋄ $f_0$ is the frequency __above__ the modal class
⋄ $f1$ is the frequency of the modal class
⋄ $f2$ is the frequency __below__ the modal class
⋄ $i$ is the __class interval or width__
## Properties of Mode
1. Even nominal data has mode(s)
2. It is not unique
__Modeless__: if all data have different values, such as 1, 1, 1 
__Multimodal__: if more than one value have the same frequency, such as 1, 1, 2, 2, 
3.  It is easy to calculate but does not allow easy
mathematical treatment
4. It is not affected by extremely large or small numbers (robust) peter mecha