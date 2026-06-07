An action or a series of actions carried out by the user or application program, which accesses or changes the contents of the database.
A transaction can have one of two outcomes;
1. If it completes successfully, it is said to have __committed__ and the database reaches a new consistent state.
2. On the other hand, if the transaction does not execute successfully, it is said to have __aborted__ and the
database is restored to its original consistent state before the concerned transaction started.
In case 2 the transaction is said to have rollback or undone.
A compensating transaction can reverse a transaction.