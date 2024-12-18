They give meaning of versatility to the general relational algebra operations.
They make it easier to generate statistical data summaries that would naturally be much more complex if we were to rely on the traditional data analysis and aggregate techniques.

We will be looking at these basic 5 aggregate functions:
1. Sum
2. Count
3. Min
4. Max

## Sum
### Relational Algebra Operation Expression

$$ J_{sum(col1})\text{tblName}$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT SUM(col1) FROM tblName;
```

## Count
### Relational Algebra Operation Expression

$$ J_{count(col1})\text{tblName}$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT COUNT(col1) FROM tblName;
```

## Average
### Relational Algebra Operation Expression

$$ J_{avg(col1})\text{tblName}$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT AVG(col1) FROM tblName;
```

## MIN
### Relational Algebra Operation Expression

$$ J_{\text{min}(\text{col1}})\text{tblName}$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT MIN(col1) FROM tblName;
```

## MIN
### Relational Algebra Operation Expression

$$ J_{\text{max}(\text{col1}})\text{tblName}$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT MAX(col1) FROM tblName;
```