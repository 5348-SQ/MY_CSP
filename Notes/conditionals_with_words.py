name = input("what is thy name?: ").strip().capitalize()

if name == "Arthur":
    print("Hi kind Arthur")
    quest = input("what is your quest? ").strip().title()
    if quest == "Holy Grail":
        print("Good luck")

else:
    print(f"hello {name}. you are not a king")