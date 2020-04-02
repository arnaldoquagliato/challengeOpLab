testCases = input("Number of cases: ")

count = 0

player = "First"
counter = 1

def alterPlayer(counter){
    if int(counter) % 2 == 0:
        player = "First"
        counter+=1
    else:
        player = "Second"
    counter+=1    
}
while count < int(testCases):
    numberOfStones = input("Quantity of Stones: ")
    while int(numberOfStones) < 2:
        numberOfStones = int(numberOfStones)
        if numberOfStones-5 > 0 and numberOfStones > 3:
            numberOfStones = numberOfStones-5
            alterPlayer(counter)
        elif numberOfStones-2 > 0 and numberOfStones > 2:
            numberOfStones = numberOfStones-2
            alterPlayer(counter)
            alterPlayer(counter)
        
        