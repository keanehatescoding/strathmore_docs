It operates on two(or more) relations and returns a result set that contains tuples from the left hand relation that are not in the right hand relation.

## Relational Algebra Operation Expression

### Method 1

$$(\Pi_{col1}\text{tblName1})-(\Pi_{col2}\text{tblName1})$$


### Method 2

$$(\Pi_{col1}\text{tblName1})\backslash(\Pi_{col2}\text{tblName1}$$
## Oracle PL/SQL Equivalent Expression

```SQL
SELECT col1 FROM tblName1
MINUS
SELECT col2 FROM tblName2;
```