---
id: DML
aliases: []
tags: []
---

 There are restrictions on types of modifications that can be made through views:

All DML operations are allowed if:

1. the query spans a single base relation, and
2. the query contains all the candidate keys of base relation and
3. the query embodies all columns of the base relation that have the not null constraint enforced.
4. the view does not entertain any aggregate functions and/or grouping operations.

- No DML operations are allowed if the view definition spans multiple base relations.
- No DML operations are allowed if the view definition involves aggregate functions and/or grouping operations.
- Some DML operations may be permissible if the view definition includes some but not all the candidate keys of the base relation.
- Some DML operations amy be allowed in the view definition includes some but not all the columns that have the not null constraint enforced.

- There are mainly 3 classes of views defined as below:

1. Theoretically Not Updateable;
2. Theoretically Updateable;
3. Partially Updateable.

