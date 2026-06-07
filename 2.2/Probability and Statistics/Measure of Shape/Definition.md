__Coefficient of Variation__ - is defined as the ratio of standard deviation to the mean.
It provides a relative measure of the dispersion in data.
$$CV =\begin{cases} 
\frac{\sigma}{\micro} \space\text{for population}\\
\frac{s}{x}\space\text{for sample}
\end{cases}$$
It shows the extent of variability in relation to mean of the population.
It is a normalized measure of dispersion of a probability distribution or frequency distribution.
## Properties
1. All values are used in the calculation.
2. It is only defined for ratio level of data.
3. The actual value of CV is independent of the unit of the unit in which the measurement was taken, so it is a dimensionless number.

__NB:__ For comparison between data sets with different units or widely different means, one should use the coefficient of variation instead of the standard deviation.

## Skewness
It refers to the asymmetry or lack of symmetry in the shape of a frequency distribution
In symmetrical distribution, the mode, median and mode are equal to each other.
In asymmetrical distribution, the mode $\ne$ median $\ne$ mode are equal to each other.

### Positively Skewed Distribution
![[Pasted image 20251204185620.png]]
Mean is greater than the mode and the median lies somewhere in between mean and mode.

### Negatively Skewed Distribution
![[Pasted image 20251204185529.png]]
Mode is greater than the mean and the median lies in between mean and mode.

### Symmetric/ Normal Distribution
![[Pasted image 20251204185831.png]]
Mean = Mode = Median

## Karl Pearson's coefficient of skewness
$$S_{k}= \frac{\text{mean}-\text{mode}}{\sigma}=\frac{3(\text{mean}-\text{median})}{\sigma}$$
$S_k=0$ the distribution of data is symmetrical.
$S_{k}>0$ the distribution of data is positively skewed.
$S_{k}<0$ the distribution of data is negatively skewed.

## Bowley's $S_Q$
Method is based on quartiles
$$S_{Q}= \frac{Q_{3}-2 \times Q_{2}+Q_{1}}{Q_{3}-Q_1}$$
$S_{Q}=0$ The distribution of the data is symmetrical
$S_{Q}>0$ The distribution of the data is positively skewed
$S_{Q}< 0$ The distribution of the data is negatively skewed.

## Kelly's $S_P$
Method is based on percentiles
$$S_{P}= \frac{P_{90}-2 \times P_{50}-P_{10}}{P_{90}-P_{10}}$$
$S_{P}=0$ The distribution of the data is symmetrical
$S_{P}>0$ The distribution of the data is positively skewed
$S_{P}< 0$ The distribution of the data is negatively skewed.

## Moments Coefficient of Skewness $\beta_1$
Method is based on moments $\micro_r$
$$\beta_{1}= \frac{\micro_{3}}{\micro_{2}^3}$$
where $\micro_{3}=\frac{1}{N}\sum\limits_{i=1}^{N}(x-\micro)^3$, $\micro_{2} =\frac{1}{N}\sum\limits_{i=1}^{N}(x-\micro)^2$
$\micro_{3}=0$ implies the distribution of the data is symmetrical.
$\micro_{3}>0$ implies the distribution of the data is positively skewed.
$\micro_{1}<0$ implies the distribution of the data is negatively skewed.

## Kurtosis $B_2$
Kurtosis refers to the degree of flatness or acuteness of the curve.
The kurtosis of a distributions is defined by
⋄ __Mesokurtic__ The normal curve $\beta_2 = 3$.
⋄ __Leptokurtic distributions__ : is one that has kurtosis greater than a mesokurtic distribution $\beta_2 > 3$.
⋄ __Platykurtic distributions__ : the curve is less peaked than normal curve $\beta_{2}<3$
![[Pasted image 20251204192554.png]]

### Moments Coefficient of Kurtosis $B_1$
Method is based on moments $\micro_r$
$$\beta_{2}=\frac{\micro_4}{\micro_2^2}$$
$\micro_{4}=\frac{1}{N}\sum\limits_{i=1}^{N}(x-\micro)^4$, $\micro_{2}=\frac{1}{N}\sum\limits_{i=1}^{N}(x-\micro)^2$
$\beta_{2}=3$ the distribution of the data is __Mesokurtic__.
$\beta_2 > 3$ The distribution of the data is __Leptokurtic__.
$\beta_2 < 3$ The distribution of the data is __Platykurtic__.