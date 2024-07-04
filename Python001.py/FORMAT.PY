import re

name = input("Whats your name?").strip()
#matches = re.search(r"^(.+), *(.+)$", name) 
if matches:=re.search(r"^(.+), *(.+)$", name):
    #last, first = matches.groups()
    #name = f"{first}{last}"
    name =  matches.groups(2) +" "+ matches.groups(1)
print(f"hello, {name}")