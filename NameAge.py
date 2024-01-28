Name=input("What is your name ? :")
Age=input("What is your age ? :")
print(f"Glad to see you {Name} , how are you today? ")
if int(Age)<18:
    print("Sorr! You cannot access this site as it is Age restricted")
else:
    if 18<=int(Age)<60:
        print("You are an adult.  Enjoy the content.")
