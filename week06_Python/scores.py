from cs50 import get_int

#=============== THIS EQUAL ==============

# scores = [72, 73, 33]

# average = sum(scores) / len(scores)
# print(f"Average: {average}")

#=============== THIS EQUAL ==============

scores = []  #OR==>  scores = list()

for i in range(3):
    score = get_int("Scores: ")
    scores.append(score) #OR ===> scores += [score]

average = sum(scores) / len(scores)
print(f"Average: {average}")
