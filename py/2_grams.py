n = int(input())
string = input()
string = list(string)
grams = {}
for i in range((len(string))-1):
    grams.update({string[i]+string[i+1]: 0})
# find which gram is most common
for i in range((len(string))-1):
    grams[string[i]+string[i+1]] += 1
max = 0
for i in grams:
    if grams[i] > max:
        max = grams[i]
        max_gram = i
print(max_gram)
