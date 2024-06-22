# Write a Python program which accepts the radius of a circle from the user and compute the area.
import math

radius = float(input("\nRadius(m) = "))

circleArea = math.pi * radius**2
print("\nArea = " + str(circleArea) + " m^2\n")