testCases = int(input("Number of cases: "))

count = 0

while count < testCases:
    numberOfStones = int(input("Quantity of Stones: "))
    if( (numberOfStones % 7 == 1) or (numberOfStones % 7 == 0)):
        print ("Second")
    else:
        print ("First")

    count += 1
        
    