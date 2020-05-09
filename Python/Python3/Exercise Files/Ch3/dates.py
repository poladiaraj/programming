#
# Example file for working with date information
#
from datetime import date
from datetime import time
from datetime import datetime

def main():
  ## DATE OBJECTS
  # Get today's date from the simple today() method from the date class
  # today = date.today()
  # print(today)

  # print out the date's individual components
  # print(today.day, today.month, today.year)
  
  # retrieve today's weekday (0=Monday, 6=Sunday)
  # print(today.weekday())
  # days = ["Mon","Tuw","Wed","Thu","Fri","Sat","Sun"]
  # print(days[today.weekday()])

  ## DATETIME OBJECTS
  # Get today's date from the datetime class
  today = datetime.now()
  print(today)
  t = datetime.time(datetime.now())
  print(t)
  # Get the current time


  
if __name__ == "__main__":
  main()  