import re

email = input("email input ").strip()

#if "@" in email and"." in email:
   # print ("Valid")
#else:
#    print("Invalid")
#username, domain = email.split("@")

#if username and domain.endswith (".spu"):
 #   print("Valid")
#else:
 #   print("Invalid")
if re.search(r"^[a-zA-Z0-9_].+@a-zA-Z0-9_].+\.com$", email, re.IGNORECASE):
    print ("Valid")
else:
    print("Invalid Input")
