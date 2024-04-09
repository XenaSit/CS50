import csv
# people = dict()  OR===>  people = {}
#=============== THIS EQUAL ==============

# people = {
#     "Carter": "+1223232323",
#     "David": "+1987987987"
# }

# name = input("Name: ")
# if name in people:
#     print(f"Number: {people[name]}")


#=============== THIS EQUAL ==============

# file = open("phonebook.csv", "a")
# name = input("Name: ")

# number = input("Number: ")

# writer = csv.writer(file)
# writer.writerow([name, number])

# file.close()

#=============== THIS EQUAL ==============

# with open("phonebook.csv", "a") as file:

#     name = input("Name: ")
#     number = input("Number: ")

#     writer = csv.writer(file)
#     writer.writerow([name, number])

#=============== THIS EQUAL ==============

with open("phonebook.csv", "a") as file:

    name = input("Name: ")
    number = input("Number: ")

    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})
