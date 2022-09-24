
binaryData = []

timingData = [9034, 4518, 538, 614, 514, 614, 510, 1738,
              514, 614, 514, 610, 514, 614, 514, 610,
              514, 614, 514, 1734, 518, 1734, 518, 610,
              514, 1738, 514, 1738, 514, 1738, 514, 1738,
              514, 1734, 518, 610, 514, 1738, 514, 614,
              514, 614, 510, 1738, 514, 614, 514, 610,
              514, 614, 514, 1734, 518, 614, 510, 1738,
              514, 1738, 514, 614, 514, 1738, 514, 1738,
              514, 1734, 518, 4545]

timingData = timingData[2:]
timingData = timingData[1::2]
timingData = timingData[:-1]

# timingData = timingData[2:][1::2][:-1]
for t in timingData:
    if(t > 1000):
        binaryData.append(1)
    else:
        binaryData.append(0)


print(len(timingData))
print(timingData)
print(len(binaryData))
print(binaryData)
