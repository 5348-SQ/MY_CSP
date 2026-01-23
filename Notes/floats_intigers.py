#syntax examples be bellow
#also see pysical note in note book

price = float(input("How much did it cost: $"))

tax_rate = float(input("what percent is the tax: %"))/100

total_price = price * (1+ tax_rate)

#computer knows order of operations
#order of operations:   1.()  2. exponents 2.5: int divistion (gives only whole number) 2.55 modulus (gives)  3.mult   4.div  5.add 6.sub
# (- = subtraction)  (+ = addition) (/ = divide) (mult = *) (exponent = **) (int div = //) (modulo %)

print(round(total_price, 2))