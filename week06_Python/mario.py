from cs50 import get_int

#=============== THIS VERTICAL ==============
# for i in range(3):
#     print("#")

#=============== THIS EQUAL ==============
# while True:
#     n = get_int("Height: ")
#     if n > 0:
#         break

# for i in range(n):
#     print("#")

#=============== BEST PRACTICE ==============

# def main():
#     height = get_height()
#     for i in range(height):
#         print("#")

# def get_height():
#     while True:
#         try:
#             n = int(input("Height: "))
#             if n > 0:
#                 return n
#         except ValueError:
#             print("Not and Integer")

# main()

#=============== THIS EQUAL ==============

# def main():
#     height = get_height()
#     for i in range(height):
#         print("#")

# def get_height():
#     while True:
#         try:
#             n = int(input("Height: "))
#         except ValueError:
#             print("Not and Integer")
#         else:
#             if n > 0:
#                 return n
# main()

#=============== THIS HORIZONTAL ==============

# for i in range(4):
#     print("?", end="")
# print()

#=============== THIS HORIZONTAL ==============

# print("@" * 4)

#=============== THIS GRID ==============

for i in range(4):
    for j in range(4):
        print("?", end="")
    print()

#=============== THIS GRID ==============

for i in range(4):
    print("?" * 4)
