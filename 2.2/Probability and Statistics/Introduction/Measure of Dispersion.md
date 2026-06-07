**Brooks & Dicks** - dispersion or spread is the degree of scatter or variation of the variable about the central value.
__Spiegel__: The degree to which numerical data tend to
spread about an average value.
**Simpson & Kajka**: The measurement of the scatterness
of the mass of figures in a series about an average is called measure of variation or dispersion
__Dispersion__ (also known as scatter, spread or variation) measures the extent to which the items vary from some central value.

## Range
### Range for Ungrouped Data
Range = Max - Min
### Range for Grouped Data
Range = Upper Limit of last class - Lower Limit of first class
### Properties of Range
1. Only two values are used in it's calculation
2. It is influenced by extreme values hence it is said lack robustness.
3. It is easy to compute and understand.

### Limitations of Range
1. It is based on 2 items only and therefore does not cover all the items in the distribution
2. It is influenced by extreme values( not robust).
3. It fails to give any idea about the pattern of distribution

## Quartile Deviation
The __Quartile__ is a number which divide the data set
into quarters
__Interquartile range__ $(IQR)=Q_{3}-Q_{1}$ 
__Quartile deviation__$(QD)=\frac{IQR}{2}=\frac{Q_{3}-Q_{1}}{2}$.
### Process of Finding QD
1. Sort the in ascending order
2. The number on the $(\frac{n}{4})^{\text{th}}$ position is the first quartile $Q1$. The number on the $(\frac{3n}{4})^{\text{th}}$ position is the third quartile $Q3$.
3. Compute $IQR$ which is given by $IQR = Q_{3}- Q_1$
4. Compute $QD$ which is given by $QD = \frac{IQR}{2}$
For __ungrouped data__
$$\set {k=1,2,...p, p-1} => k = 1, 2, 3$$
$$Q_{k}= \frac{k}{4}(n+1)^{\text {th}} \space \text{value}$$
Lower quartile$(L_Q)$= 
$$(k=1)= \frac{1}{4}(n+1)^{\text {th}}\space\text {value}$$
Median$(M)$= 
$$(k-2)= \frac{2}{4}(n+1)^{\text{th}}\space\text{value}$$
Upper quartile$(U_Q)$ = 
$$(k=3)=\frac{3}{4}(n+1)^{\text{th}}\space\text {value}$$

For __grouped data__:
$$Q_{k}= \frac{k}{4}(n)^{\text {th}}$$
where $Q_1$ is the __first quartile__ and $Q_3$ is the __third quartile.__
Coefficient of quartile deviation
$C.Q.D=\frac{Q_3-Q_1}{Q_{3}+Q_{1}}$
### Merits
1. In certain respects it is superior to range as a measure of dispersion.
2. It can be used in open ended distributions.
3. Useful in erratic or badly skewed data.
### Limitations
1. It fails to cover all the items in a distribution
2. It is not amenable to mathematical manipulation
3. It varies widely from sample to sample based on the population.
4. Since it is a positional average it is not considered a measure of dispersion.

## Mean Absolute Deviation(MAD)
This is the average of the absolute values of deviations from the mean.
$$MAD = \frac{|x_i-\micro| + ... +|x_{n}-\micro|}{n}=\frac{\sum\limits_{i=1}^{n} |x_{i}-\micro|}{n} $$
### Merits of MAD
1. All values are used in the calculations
2. It is not unduly influenced by large or small values ( robust)
3. The absolute values are difficult to manipulate

### Demerits of MAD
1. It is not capable of further algebraic treatment
2. At times it may fail to give accurate results
3. Ignoring the signs makes the method non algebraic

## Standard Deviation
This is the average deviation from the mean.
The standard deviation $(\sigma)$ is the square root of __variance__.
### For UnGrouped Data
The __variance__ $\sigma^{2}$ of a set of $N$ numbers as a population is given by:
$$\sigma ^{2}= \frac{(x_1-\micro)^2+...+(x_{n}- \micro)^2}{N}$$
$$\sigma ^ 2=\frac{\sum\limits_{i=1}^{n}(x_{i}-\micro)^2}{N}=\frac{\sum\limits_{i=1}^{n}x_{i}^2}{N}-\micro^2$$
The __variance__ $s^{2}$ of a set of $n$ numbers as a sample is given by:
$$s^2 = \frac{(x_i-\bar x)^{2}+...+(x_n-\bar x)^2}{n-1}$$
$$s^{2}= \frac{\sum\limits_{i=1}^{n}(x_{i}-\bar x)^2}{n-1}=\frac{\sum\limits_{i=1}^{n}x_{i}-n\bar x^2}{n-1}$$
### For Grouped Data
The variance $(\sigma ^{2})$ of data organized in a frequency distribution is computed by the following formula:
$$\sigma ^{2}= \frac{\sum\limits_{i=1}^{N}f_{i}(x_{i}- \micro)^2}{N}=\frac{\sum\limits_{i=1}^{N}f_{i}x_i^2}{N}-\micro^2$$
where
- $f_i$ is the class frequency
- $x_i$ is the class midpoint
for Class $i=1 ... N$
### Merits
1. All values are used in the calculation.
2. It is not extremely influenced by outliers.

### Limitations
1. It is difficult to compute.
2. It gives more weight to extreme items and less to those which are near the mean.