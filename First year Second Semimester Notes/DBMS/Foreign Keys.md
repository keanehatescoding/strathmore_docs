Relations can declarative specify relationships between table which is typically known a referential integrity. An example of this is a foreign key field.
Foreign keys are fields from other relations that are inserted into a new relation hence the name foreign.
To insert a foreign key just type the following at the end of your relation.
```SQL
CREATE TABLE EMPLOYEES {
	empno NUMBER UNIQUE,
	empname VARCHAR2(50),
	...
	...
	CONSTAINT fk_employees_deptno FOREIGN_KEY (deptno)
		reference  DEPARTMENTS (deptno)
}
```