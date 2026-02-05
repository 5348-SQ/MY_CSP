#MY 6 updated caculator

def ina(A):
    return float(input(f"What is your {A}?: $"))

rent = ina("rent")
uti = ina("utilites bill")
tra = ina("transport bill")
air = ina("air bill")
pet = ina("pet bill")
glu = ina("glucose consumption bill")

inco = ina("income")

total_loss = rent+uti+tra+air+pet+glu

def pro(C,D):
    print(f"your {D} is %{C/inco * 100} of your income.")

pro(rent,"rent")
pro(uti, "Utilites Bill")
pro(tra, "transport bill")
pro(air, "air bill")
pro(pet, "Pet Bill")
pro(glu, "glucose consumption bill")