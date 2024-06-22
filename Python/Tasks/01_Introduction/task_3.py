# Print the calendar of a given month and year
import calendar

year = int(input("\nYear = "))
month = int(input("\nMonth = "))

print("\n")
print(calendar.month(year,month))