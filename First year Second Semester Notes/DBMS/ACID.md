---
id: ACID
aliases: 
tags:
---

## Atomicity

This is the all or none property of a transaction.
Consider a fund transfer from Alice's account to Bob's account. If the first part of the transaction is successful i.e deduction of the amount to be transferred from Alice's account is successful; then the second part of the transfer fails i.e update of Bob's account balance to the old balance plus the amount transferred fails then the entire transaction fails and everything is roll-backed. Else if the both parts of the transaction are successful then the transaction is successful. This is what constitutes atomicity of transactions.

## Consistency

f