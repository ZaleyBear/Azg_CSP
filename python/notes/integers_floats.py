price=float(input("what is the price of the item?: $"))
tax_rate=float(input("what is the tax percent in your state?: %"))
tax_rate_decimal=tax_rate/100
total=round(price*(1+tax_rate_decimal), 2)
print(round(price*(1+tax_rate_decimal),2))
