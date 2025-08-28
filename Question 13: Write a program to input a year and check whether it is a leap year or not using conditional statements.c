# Program to check whether a year is a leap year or not

# Input from user
year = int(input("Enter a year: "))

# Checking leap year conditions
if (year % 400 == 0):
    print(year, "is a Leap Year")
elif (year % 100 == 0):
    print(year, "is NOT a Leap Year")
elif (year % 4 == 0):
    print(year, "is a Leap Year")
else:
    print(year, "is NOT a Leap Year")
return 0; 
