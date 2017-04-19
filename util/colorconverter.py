# The load_color function takes RGB values between 0-255 with 0 being
# brightest. This function converts the basic colors from
# http://www.rapidtables.com/web/color/RGB_Color.htm

colorlist = [(0,0,0),
             (255,255,255),
             (255,0,0),
             (0,255,0),
             (0,0,255),
             (255,255,0),
             (0,255,255),
             (255,0,255),
             (192,192,192),
             (128,128,128),
             (128,0,0),
             (128,128,0),
             (0,128,0),
             (128,0,128),
             (0,128,128),
             (0,0,128),
			 (156,74,153),
			 (112,199,240)
			 ]

NamesList=[
'off    ',
'White  ',
'Red    ',
'Lime   ',
'Blue   ',
'Yellow ',
'Cyan   ',
'Magenta',
'Silver ',
'Gray   ',
'Maroon ',
'Olive  ',
'Green  ',
'mauve  ',
'Teal   ',
'Navy   ',
'Purple ',
'Azure  '
]		 
			 
def convertColor(colorTuple):
    r = 1023 - 4 * colorTuple[0]
    g = 1023 - 4 * colorTuple[1]
    b = 1023 - 4 * colorTuple[2]
    return str((r,g,b))

convertedColorList = [convertColor(color) for color in colorlist]
ColorVals =[]
for i in range(len(convertedColorList)):
	spaces = ' '
	ColorVal = convertedColorList[i].replace('(', '{').replace(')', '}')+ ','
	spaces = spaces *(len(convertedColorList[0])-len(convertedColorList[i]))
	ColorVal += spaces
	ColorVals.append(ColorVal)
assert len(ColorVals) == len(NamesList)
for i in range(len(ColorVal)):
	FinalList =[(ColorVals[i]+ ' //'+ NamesList[i]) for i in range(len(ColorVals))]
for final in FinalList:
	print(final)
