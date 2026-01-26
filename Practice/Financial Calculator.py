#MY, Financial Calculator

rent = float(input("what is thy rent: "))

utu = float(input("what is thy utilities bill: "))

grow = float(input("what is thy groceries bill: "))

tra = float(input("what is you transport expence amount: "))

total_income = float(input("what is thy income: "))

total_loss = grow + utu + rent + tra



rent_p = int((rent/total_income) * 100)

utu_p = int((utu/total_income)*100)
# half way through I found a more varible less way to do this but didn't want to update what I made to it

print("thy rent is $", rent, "which is", rent_p, "precent of thy income.")

print("thy utilities bill is $", utu, "which is", utu_p, "precent of thy income.")

print("thy groceries bill is $", grow, "which is", int((grow/total_income) * 100), "precent of thy income.")

print("thy transport expence is $", tra, "which is", int((tra/total_income) * 100), "precent of thy income.")

print("after paying these expences, you have $", total_income-total_loss, "left, which is", int((total_loss/total_income)*100), "precent of you income. It is advised you add this to your savings")