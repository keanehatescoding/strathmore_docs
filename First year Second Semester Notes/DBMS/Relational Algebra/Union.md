It operates on two or more relations and returns a vertical concatenation of the attributes from the relations.
__NB:__ Union compatibility is mandatory in order for union of two relations to take place.

### Relational Algebra Operation

$$(\pi_{col1}\text {tblName1)}\cup(\pi_{col2}\text{tblName2})$$
### Oracle PL/SQL Equivalent Expression

```SQL
SELECT col1 FROM tblName1
UNION
SELECT col2 FROM tblName2;
```
