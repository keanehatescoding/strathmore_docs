---
id: Creating tables
aliases: []
tags: []
---

In order to create a table in LiveSQL we need to type the following

```SQL
CREATE TABLE DEPARTMENTS (
 deptno NUMBER,
 name   VARCHAR2(25)  NOT NULL,
 location VARCHAR2(30),
 head   VARCHAR(20),
)
```

This creates a table with 4 columns and sets the deptno field as the primary key hence no need to make this field uniq and not null.

