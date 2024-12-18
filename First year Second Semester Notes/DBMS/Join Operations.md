4) The outer join - left outer join
				- right outer join
				- full outer join
5) The Semi join
## 1. The theta join $(\theta)$ 
This constitutes a collection of several join operations i.e greater than , less than , not equal to, equal to etc;
## 2. The Equi Join
This is a specific theta join operation i.e. the equality join operation
It's notation is 
$$R$$

### R.A.O operation
$$R$$
## SQL equivalent expression
```sql
SELECT * FROM tblName1,tblName2 WHERE x.record = y.record;
```
## 3. The Natural Join 
This is essentially the Equi Join join operation but it removes duplicate tuples.
### R.A.O operation
## SQL equivalent expression
``` SQL
SELECT * FROM tblName1 NATURAL JOIN tblName2;
```
## 4. The Outer Join 

## 5. Cross Join
This is essentially the equivalent as the Cartesian Product of two or more relations

### Relational Algebra Expression

$$\text{tblName1}\times\text{tblName2}$$
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