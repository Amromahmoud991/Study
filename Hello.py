def main():
    name = input ("What's your name? ").strip().title()
    first, last = name.split(" ")
    print(f"Welcome to VScode, {name}!")
main()
