#Write a Python program to test whether a passed letter is a vowel or not.

print("\nPlease enter a letter: ")

letter = str(input())
vowels = ["a","e","o","i","u","A","E","O","I","U"]
count = 0

count = vowels.count(letter)

if count!=0:
    print("\nVowel\n")
else:
    print("\nConstant\n")