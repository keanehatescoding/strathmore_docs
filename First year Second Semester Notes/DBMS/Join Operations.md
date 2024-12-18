These are derivatives of Cartesian Product meaning they are tantamount(equivalent) to performing selection operations over a Cartesian product.
There are 5 main join operations:
1) The theta($\theta$) join.
2) The equi-join
3) The natural join
4) The outer join - left outer join
				- left/right outer join
				- full outer join
				- inner join
1) The semi join
__NB:__ One of the most difficult operations to implement efficiently in an RDBMS and one reason why RDBMSs have intrinsic performance problems.
## 1. The theta $(\theta)$ join $R\bowtie_{\theta}S$
This constitutes a collection of several join operations i.e greater than, greater than or equal to, less than, less than or equal to, not equal to, equal to etc;
It operates on two or more relations to return a result set containing tuples from relation S

### Relational Algebra Operations Expression

$$\sigma_{prediacte}(R\times S)$$
$$\text{R}\bowtie_{\text{R.col}\ne,=,\gt,\lt,\ge\le \text{S.col}}(S)$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT * FROM 
```

## 2. The Equi-Join

This is a specific theta($\theta$) join operation i.e. the equality theta join operation.
### R.A.O operation

$$\sigma_{\text{R.col = S.col}}(R\times S)$$

$$R\bowtie_{R.col=S.col}(S)$$

### SQL equivalent expression

```sql
SELECT * FROM tblName1,tblName2 WHERE tblName1.col = tblName2.col;
```
## 3. The Natural Join 

This is essentially the Equi Join join operation but it removes duplicate tuples.
### R.A.O operation

$$\sigma_{\text{R.col=S.col}(R\times S)}$$
$$R\bowtie_{\text{R.col=S.col}}(R\times S)$$

### SQL equivalent expression

``` SQL
SELECT * FROM tblName1 NATURAL JOIN tblName2;
```
## 4. The Outer Join 

It returns a relation that shows tuples from the first relation which do not have a matching value with relations from the second relation
It has 3 variations namely:
1. The Left/Right Outer Join
2. The Full Outer Join
3. The Inner Join

### Relational Algebra Operations Expression

$$\sigma_{\text{R.col}\ne\text{S.col}(}(R\times S)$$

### Oracle PL/SQL Equivalent Expression

```SQL
SELECT * FROM tblName1;
 ```
 
## Semi Join

It returns a relation that contains the tuples of R that participate in the join with S

### Relational Algebra Operations Expression

$$R\ltimes S$$
## 5. Cross Join
This is essentially the equivalent as the Cartesian Product of two or more relations

### Relational Algebra Expression

$$\text{R}\times\text{S}$$
### Oracle PL/SQL Equivalent Expression

#### Method 1

```SQL
SELECT * FROM tblName1, tblName2;
```

#### Method 2

```SQL
SELECT * FROM tblName1 
CROSS JOIN tblName2;
```