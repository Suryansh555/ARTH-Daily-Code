def ambiguousMeasurements(measuringCups, low, high):
    memoization = {}
    return canMeasureInRange (measuringCups, low, high, memoization)



def canMeasureInRange(measuringCups, low, high, memoization):
    memoizekey = createHashableKey(low, high)
    if memoizekey in memoization:
        return memoization[memoizekey]

    if low <= 0 and high <= 0:
        return False

    canMeasure = False

    for cup in measuringCups:
        cupLow, cupHigh = cup
        if low <= cupLow and cupHigh <= high:
            canMeasure = True
            break
        newLow = max(0, low - cupLow)
        newHigh = max(0, high - cupHigh)
        canMeasure = canMeasureInRange(measuringCups, newLow, newHigh, memoization)
        if canMeasure:
            break

    memoization[memoizekey] = canMeasure
    return canMeasure


def createHashableKey(low, high):
    return str(low) + ":" + str(high)

measuringCups = [
    [200,450],
    [450,465],
    [800,850]
]
low = 2100
high = 2300

print()
print(ambiguousMeasurements(measuringCups,low,high))
