__Probability__ refers to the chance of occurrence of an event or happening OR a quantitative measure of uncertainty- a number that conveys a strength of  our belief in the occurrence of an uncertain event.
or 
Dispersion is the degree of the scatter or variation of the variable about a central value.
__Experiment__ is a process that leads to one of several possible outcomes.
__Outcome__ is a particular result of an experiment.
__Sample Space__ is the collection or set of all the possible outcomes of a random experiment.
__Event__ is a collection of one or more outcomes of an experiment or a subset of the sample space.
The outcomes of an experiment in probability theory have 3 things in common.
1. There are 2 or more outcomes of each experiment
2. It is possible to specify the outcome in advance
3. There is uncertainty about the outcomes

## Approaches to probability
### 1. Empirical Probability
This is based on the number of times an event occurs as a proportion of a known number of trials
$$P(E)=\frac{\text{frequency of the class}}{\text{total frequency in the distribution}}=\frac{f}{n}$$

### 2. Classical Probability
Is based on the assumption that the outcomes of experiment are equally likely.
$$P(E)=\frac{\text{Number of favourable outcomes}}{\text{Total number of outcomes}}=\frac{n(A)}{n(S)}$$

## Probability Axioms
For any random experiment with the sample space $S$, the probability of any event is $P(E)$ satisfying:
1. $0\leq P(E)\leq 1$
2. $P(S)=1$ or $\sum\limits p = 1$
The occurrence of one event means that none of the other events can occur at the same time means the event is __mutually exclusive__.
If two events are such that occurrence of one implies that the other cannot occur, then the probability that either one or the other will occur is equal to the sum of their individual probabilities.
If events $A$ and $B$ are mutually exclusive:
$$P(A\cap B)=\varnothing=0$$
then $P(A\cup B)=P(A)+P(B)$
If  two or more events together define the total sample space, the events are said to be __collectively exhaustive__.i.e the example of tossing a coin
$P(H \cup T)=P(H)+P(T)=1$
### 1. Addition Theorem / Rule of UNIONS
For any two events $A$  and $B$
$P(A\cup B)=P(A)+P(B)-P(A\cap B)$
### Independent events:
Two events A and B are independent events if the fact that A occurs does not affect the probability of B occurring.
Events $A$ and $B$ are said to be independent if
- $P(A|B) = P(A)$
- $P(B|A) = P(B)$
- $P(A \cap B)= P(A) \times P(B)$
If events $A$ and $B$ are Independent events:
$$P(A\cup B)=P(A)\times P(B)=P(A)P(B)$$
The probability of the intersection of two events $P( A\cup B)$ is called __joint probability__.

### 2. The complement Rule
It defines the probability of the complement of an event in terms of the probability of the original
event.Consider event A defined over the sample space S. The complement of set A, denoted by − A
![[Pasted image 20251205104442.png]]
Thus $P(A)= 1 -P(\bar A)$ or $P(\bar A)= 1-P(A)$
### 3. The Conditional Probability Rule
As a measure of uncertainty, probability depends on information. We often face situations where the probability of an event A is influenced by the information that another event B has occurred.Thus, the probability we would give the event "Xerox
stock price will go up tomorrow"
Consider two events $A$ and $B$ defined over the sample space $S$
$$P(A|B)=\frac{P(A \cap B)}{P(B)}$$
## Multiplication Rule
For any event $A$ and $B$, the probability of event $A$, given the event $B$.
Denoted $P(A|B)$ it means that the probability that event A occurs given that event B has already occurred.
If event $A$ and $B$ are dependent events
$$P(A|B)=\frac{P(A\cap B)}{P(B)}$$
$$P(A\cap B)=P(A|B)\times P(B)$$

## Bayes Theorem
From the multiplication rule we know that 
$P(A\cap B)=P(B)\times P(A|B)$
and that 
$P(A\cap B)=P(A)\times P(B|A)$
so clearly 
$P(A)\times P(B| A)=P(B)\times P(A|B)$
and so
$$P(A|B)=\frac{P(B|A)P(A)}{P(B)}$$

## Pearson's product-moment correlation coefficient
$S_{xx}=\sum\limits x^2-\frac{(\sum\limits x)^2}{n},S_{yy}=\sum\limits y^2-\frac{(\sum\limits y)^2}{n}$
$S_{xy}=\sum\limits xy - \frac{\sum\limits x \sum\limits y}{n}$
$$r=\frac{S_{xy}}{\sqrt S_{xx} S_{yy}}$$
or directly from the sums
$$r = \frac{n(\sum\limits xy)-(\sum\limits) x( \sum\limits y)}{\sqrt {|n(\sum\limits x^{2}-(\sum\limits x)^2)||n(\sum\limits y^{2}- (\sum\limits y)^{2})|}}$$
The correlation coefficient should only be used if two variables are normally distributed.
## Spearman's rank coefficent
$$r_{s}= 1-\frac{6\sum\limits d^2}{n(n^{2}-1)}$$
## Random Variables
A random variable $X$ is a function that associates each element in the sample space with a real number(most of the time) i.e $X:S\implies R$
$X$ denotes the random variable but the variable is can be denoted by any letter and usually by capital letters such as $X, Y$ and  $Z$.
$x$ denotes the value of the random variable $X$.

### 1. Discrete random variable 
This is a random variable that can assume only a countable number of distinct values i.e $0,1,2,3,4,...$.
e.g. number of people, cars
A discrete random variable $X$ assumes each of its values with a certain probability.
$P(X=x)=f(x)$ is called the probability mass function(PMF).
In some books this is referred to as a probability mass function (pmf) but it should be noted that pmf is for discrete random variables while probability density function (pdf) is used for continuous random variables
Axioms of probability mass function
$0\leq P(X=x)\leq 1$
$\sum\limits^{\infty}_{i=1}P(X=x)=1$
#### 2. Continuous random variable
This is a random variables that may assume an infinite number of values within a given range.
e.g. weight, height, volume


### Expected Value(E\[X])
**Mathematical expectation** refers to the mean or expected value of a random variable X whose distribution is known. The expected value, denoted by $E(X)$, a weighted average of realizations x of X
where the weights are the corresponding probabilities.
If $P(X = x) = p(x)$ is the probability of various outcomes of X, then Mean of $X$ or expected value of X is given by $E(X)=\sum\limits_{x} x.p(x)$
The expectation of a random variable is the average of the random variable that we expect in the long run.
$$\micro=E(X)=\sum\limits^{\infty}_{i=1}x_{i}P(x_i)$$
We can also compute the variance and standard deviation of the random variable as follows
$$Var(X)=\sum\limits_{x}x^{2}.p(x)-(\sum\limits_{x} x.p(x))^{2}= E(X^2)-(E(X))^2$$
## Binomial Distribution
Where the Bernoulli Distribution asks the question of "Will this single event succeed?" the Binomial is associated with the question "Out of a given number of trials, how many will succeed?
The Binomial distribution is composed of multiple
Bernoulli trials. We conduct $n$ repeated experiments where the probability of success is given by the parameter $p$ and add up the number of successes. This number of successes is represented by
the random variable $X$. The value of $X$ is then between 0 and $n$. When a random variable $X$ has a Binomial Distribution with parameters p and n we write it as$ X$ ∼ Bin(n; p) or X∼ B(n; p)
and the probability distribution function is given by the equation
$$P(X=k)=\begin{cases} (n  k)p^{k}(1-p)^{(n-k)},0\leq k \leq n\\0
\end{cases}$$