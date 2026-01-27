#A sting is anything in " "


name = input("what is thy name?: ").strip().title()








sentence = "the quick brown fox jumps over the lazy dog"
print (sentence)

word = input("pick a word from the sentence to change: ").strip().lower()

new = input("What is the new word: ").strip().lower()

start = sentence.find(word)

sentence = sentence.replace(word, new)

print(sentence[start:start+len(word)])

print(name + "!! did you know?", sentence)

print("F" + f"Hellow {name}")