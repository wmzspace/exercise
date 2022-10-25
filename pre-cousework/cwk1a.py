def __main__():
    try:
        tax = float(input())
        if tax < 0:
            raise
        if tax <= 7500:
            income = 12500 + tax / 0.2
        elif tax <= 47500:
            income = 50000+(tax-7500)/0.4
        else:
            income = 150000+(tax-47500)/0.45
        print(f"%.2f" % income)
    except:
        print("Invalid amount!")