---
id: ANSI-SPARC model
aliases: []
tags: []
---

The goal of the ANSI-SPARC model is to separate the user applications from the physical database.
It has 3 levels namely:

1. External Level
2. Conceptual Level
3. Internal Level`

## Internal Level

This level describes the physical storage structure of the database.
It also fully describes the data storage and access.

## Conceptual Level

The conceptual level abstract the internal level and focuses on describing the entities, data types, constraints, relationships etc between the data.

## External Level

It contains multiple views which show the user only the part that he/she is interested of and abstracts the remaining database from the user group.

Each level should have [[First year Second Semester Notes/DBMS/Terminology|data independence]].
There are 2 types of data independence namely:

1. Logical data independence - the ability to alter the conceptual schema of the database without modifying the external schema.
2. Physical data independence - the capacity to alter the physical storage structure(internal schema) of the database without changing the conceptual schema.

