#MY, Financial Calculator
print("mortal, who seekith financial prosparity, answer the fallowing qustions with numbers or thy seed shall be cursed with redundancy and the eternal status of 'jobless'")

rent = float(input("what is thy rent:USD "))

utu = float(input("what is thy utilities bill:USD "))

grow = float(input("what is thy groceries bill:USD "))

tra = float(input("what is you transport expence amount:USD "))

total_income = float(input("what is thy income:USD "))

total_loss = grow + utu + rent + tra



rent_p = int((rent/total_income) * 100)

utu_p = int((utu/total_income)*100)
# half way through I found a more varible less way to do this but didn't want to update what I made to it

print("thy rent is $", rent, "which is", rent_p, "precent of thy income.")

print("thy utilities bill is $", utu, "which is", utu_p, "precent of thy income.")

print("thy groceries bill is $", grow, "which is", int((grow/total_income) * 100), "precent of thy income.")

print("thy transport expence is $", tra, "which is", int((tra/total_income) * 100), "precent of thy income.")


sav = round((total_income * 0.1), 2)

spend = round((total_income - (sav + total_loss)), 2)

print("Mortal, after paying these expences, you have $", total_income-total_loss, "left, which is", round(((total_loss/total_income)*100),2), "precent of you income. It is advised you add at lest $", sav, "to your savings and set $", spend, "as your spending amount, heed these words or face a curse. NOW BEGONE! ")