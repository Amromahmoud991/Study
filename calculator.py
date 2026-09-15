def main():
    total_amount = float(input("What is the Bill? : "))
    tip_percentage = int(input("What percentage do you want to tip? : "))
    people = int(input("How many people are eating? :"))
    
    owed = calculate_split(total_amount, tip_percentage, people)
    print(f"everyone owes: {owed:.2f}")


def calculate_split(total_amount, tip_percentage, people):
    tip_amount = float((tip_percentage/100) * total_amount)
    return (total_amount + tip_amount) / people


main()