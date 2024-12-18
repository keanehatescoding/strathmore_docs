It operates on two or more relations and returns a result set that contains tuples that are from relation $R$ that are also in relation $S$.
## Relational Algebra Operation Expression

### Method 1
$$R\cap S$$
$$(\Pi_{col1}\text{tblName1})\cap(\Pi_{col2}\text {tblName2})$$

### Method 1
$$R-(R-S)$$
$$(\Pi_{col1}\text{tblName1})-((\Pi_{col1}\text{tblName1})-(\Pi_{col2}\text {tblName2}))$$
## Oracle PL/SQL Equivalent Expression

```SQL
SELECT col1 FROM tblName1
INTERSECT
SELECT col2 FROM tblName2;
```