def main():
    first = input("Please enter your first name: ")
    last = input("Please enter your last name: ")

    name = format_full_name(first, last)
    print(f"Your full name is: {name}!")
    

def format_full_name(first, last):
    return (f"Your name is: {first.strip().title()} {last.strip().title()}")

    

main()