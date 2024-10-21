Triggers are conditional functions that take place when a certain data manipulation activity takes places e.g. upon inserting a row, a trigger can be setup to modify the inserted row.
To create a trigger type the following
```SQL
CREATE OR REPLACE TRIGGER DEPARTMENTS_BIU
	BEFORE INSERT OR UPDATE ON DEPARTMENTS
	FOR EACH ROW
BEGIN
	IF INSERTING AND :new.deptno is null then
		:new.deptno := to_number(sys_guid()
			'XXXXXXXXXXXXXXXXXXXXXXXXXXXX');
	end if;
end
```
The BIU work stands for before insert or update. This trigger ensure when the user inserts a new tuple he or she does not fail to insert a deptno.