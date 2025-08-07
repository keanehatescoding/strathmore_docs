---
id: File-Based Approach vs RDBMS
aliases: []
tags: []
---

## File Based Approach

## Limitations

1. Separation of data can lead to unrealized potential of other data which is stored in separate files.
2. It permits data duplication leading to potential data redundancy and thus wastage of space and the cost of accessing data increases.
3. It permits data duplication leading to potential data inconsistencies during anomalies and potentially unusable data.
4. When programs are written in different languages it could lead to either incompatibility or complex programs to make it compatible.
5. Fixed queries leads to new programs needed to be written in order to satisfy the new requirements.
6. It is much harder to enforce constraints i.e age is greater than 0 and less than 130.
7. It is much difficult to force [[ACID]] of data.
8. It is more prone to concurrent access anomalies.
9. It is much harder to implement security control mechanisms.

