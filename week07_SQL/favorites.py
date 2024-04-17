# import csv

# with open("favorites.csv", "r") as file:

    # reader = csv.DictReader(file)
    # OR
    # reader = csv.reader(file)
    # next(row)

    # scratch = 0
    # c = 0
    # python = 0
    # OR
    # scratch, c, python = 0, 0, 0
    # OR
#     counts = {}

#     for row in reader:
#         favorite = row["language"]
#         if favorite == "Scratch":
#             scratch += 1
#         elif favorite == "C":
#             c += 1
#         elif favorite == "Python":
#             python += 1

# print(f"Scratch: {scratch}")
# print(f"C: {c}")
# print(f"Python: {python}")

# REFECTORE THE ABOVE STATEMENT==================

#     reader = csv.DictReader(file)
#     counts = {}

#     for row in reader:
#         favorite = row["language"]
#         if favorite in counts:
#             counts[favorite] += 1
#         else:
#             counts[favorite] = 1

# def get_value(language):
#     return counts[language]

# for favorite in sorted(counts, key=get_value, reverse=True):
# OR use this with an anon function =====
# for favorite in sorted(counts, key=lambda language: counts[language], reverse=True):
#     print(f"{favorite}: {counts[favorite]}")

# REFECTORE THE ABOVE STATEMENT==================

#     reader = csv.DictReader(file)
#     counts = {}

#     for row in reader:
#         favorite = row["problem"]
#         if favorite in counts:
#             counts[favorite] += 1
#         else:
#             counts[favorite] = 1

# for favorite in sorted(counts, key=lambda problem: counts[problem], reverse=True):
#     print(f"{favorite}: {counts[favorite]}")

# REFECTORE THE ABOVE STATEMENT==================

#     reader = csv.DictReader(file)
#     counts = {}

#     for row in reader:
#         favorite = row["problem"]
#         if favorite in counts:
#             counts[favorite] += 1
#         else:
#             counts[favorite] = 1

# favorite = input("Favorites: ")
# if favorite in counts:
#     print(f"{favorite}: {counts[favorite]}")

# USING from sc50 import SQL==================
from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

# rows = db.execute("SELECT * FROM favorites WHERE problem = 'Mario'")
# rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = 'Mario'")
rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite)

row = rows[0]
for row in rows:
    print(row["n"])
