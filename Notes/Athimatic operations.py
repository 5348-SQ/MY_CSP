#computer knows order of operations
#order of operations:   1.()  2. exponents 2.5: int divistion (gives only whole number) 2.55 modulus (division but only remainder of division)  3.mult   4.div  5.add 6.sub
# (- = subtraction)  (+ = addition) (/ = divide) (mult = *) (exponent = **) (int div = //) (modulo %)

apples = int(input("how many apples are there: "))

friends = int(input("How many friends does thou posses: "))

print("each friend gets", apples//friends, "and I have", apples%friends, "left over")