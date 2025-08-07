---
id: Normalization
aliases: 
tags:
---

## First Normal Form

The relation must have a primary key.
Repeating groups are not permitted i.e tuples must be unique.
Using row order to convey information is not permitted.
Mixing data types is not permitted. I.e a height field cannot have the height as an integer and a tuple has it's height as "somewhere between x and x+2 cm".
All data must be atomic (non divisible).

## Second Normal Form

The relation must be at least in first normal form.
No partial dependencies are permitted. I.e all attributes must be __fully functionally dependant on the primary key.__

## Third Normal Form

The relation must be at least in 2<sup>nd</sup> normal form.
No transitive dependencies are permitted i.e all non-key attributes are __fully functionally independent of each other__.

