
It is a [[Superkey|super key]] that is in its simplest atomic form.
It continues to uniquely identify a tuple despite being irreducible.
It is unique/irreducible(both are mandatory) 
Being reducible fails uniqueness.
$\text{SK}\ge\text{CK}$

__NB:__
A candidate key __must__ be unique over time i.e it is very very unlikely to change over time. If it seems unique now but it change over time they it is not an ideal candidate key.
A phone number can be a candidate key but it is not an ideal candidate key becomes one can lose his/her phone and it's value changes to null and phone numbers change over time but candidate keys should be stable.