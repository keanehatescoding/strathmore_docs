## Mean Absolute Deviation
The mean absolute deviation is the average of the absolute values of deviations from the mean.
The mean absolute deviation $MAD$ for a set of $n$ numbers of __ungrouped data__ is given by:
$$MAD=\frac{\sum\limits |x_{i}-\bar x|}{n}$$
while for __grouped data__ it is given by:
$$MAD = \frac{\sum\limits f_{i}| x_{i}- \bar x|}{\sum\limits f_i}$$
where $x_{i}$ is the value of the midpoint.
### Merits
1. All values are used in the calculation.
2. It is not unduly influenced by large or small values, meaning it is robust.
3. The absolute values are difficult to manipulate.

### Limitations
1. It is not capable of further algebraic treatment.
2. At times it may fail to give correct results.
3. Ignoring of signs makes the method non algebraic.
## Standard Deviation
This is the number that gives us the average of the deviation from the mean.
Is is the __square root__ of variance.
The variance$(\sigma^{2})$ of a set of $N$ numbers as population is given by 
$$s^{2}=\frac{(x_{1}-\micro)^{2}+...+(x_{n}-\micro)^{2}}{N}$$
$$s^{2}=\frac{\sum\limits(x_i-\micro)^2}{N}=\frac{\sum\limits x_{i}^{2}}{N}-{\micro^2}$$
The variance of a set of n numbers as a sample:
$$\sigma^{2}=\frac{(x_{i}-\bar x)^2+..+(x_{n}-\bar x)^2}{n-1}$$
$$\sigma^{2}= \frac{\sum\limits (x_{i}-\bar x)^2}{n-1}=\frac{\sum\limits x_{i}^{2}-n\bar x^{2}}{n-1}$$
For __grouped data__
$$\sigma^{2}= \frac{\sum\limits f_{i}(x_{i}- \micro)^2}{N}=\frac{\sum\limits f_{i}x_{i}^{2}}{N}-\micro^2$$ where $f_{i}$ is the __class frequency__ and $x_{i}$ is the __midpoint of the grouped data__ for Class $i =1..N$   
### Merits
1. All values are used in the calculation
2. It is not extremely influenced by outliers

### Limitations
1. It is difficult to compute
2. It gives a more weight to extreme items and less to those which are near the mean.
## Root Mean Square
$$\bar x_{\text RMS} = \sqrt {MD}$$

## Weighted Mean
The Weighted Mean$(WM)$ for a set of $n$ numbers:
$$WM = \frac{w_{1}x_{1}+...+w_{n}x_{n}}{w_1+...+w_{n}}$$
## Trimmed Mean
$$TM = \frac{x_i+...+x_{n-i}}{n-i}$$ where $x_{i} +...+ n_{n-i}$ is the set of new numbers after removing $i$ numbers from both ends of the set.  
## Mean of Grouped Data
$$\bar x = \frac{f_{1}x_{1}+...+f_{n}x_{n}}{f_1+...+f_{n}}$$

Given the sales of one week. Find the S.D and interpret the results

| Sales | Frequency | $x_i$ | $f x_i$ | $x_i^2$ |
| ----- | --------- | ----- | ------- | ------- |
| 5-9   | 10        | 7     | 70      | 49      |
| 10-14 | 18        | 12    | 216     | 144     |
| 15-19 | 24        | 17    | 208     | 289     |
| 20-24 | 15        | 22    | 330     | 484     |
| 25-29 | 7         | 27    | 189     | 729     |
| 30-34 | 6         | 32    | 192     | 1024    |
|       | 80        |       | 1405    | 28525   |
$$s=\sqrt{\frac{\sum\limits f_{i}x^2_i}{\sum\limits f_i}-\frac{\sum\limits f_{i}x_{i}}{\sum\limits f_i}}$$
$$s=\sqrt{\frac{28525}{80}-(\frac{1405}{80})^2}=\sqrt{356.56-308.44}=\sqrt{48.12}=6.94$$