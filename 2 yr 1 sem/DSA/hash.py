a = {}
a = {
    "names": ["Mulle", "Keane", "Kelvin"],
    "places": ["Nairobi", "Kitui", "Elgon"],
    "Currency": ["Mango", "Mursik", "Nike"],
}


def suggestions(hashtable, word):
    return hashtable[word]


print("Do you want to get suggestions for places, Currency or names")
suggestion = str(input("I want suggestions for: "))
print(suggestions(a, suggestion))
